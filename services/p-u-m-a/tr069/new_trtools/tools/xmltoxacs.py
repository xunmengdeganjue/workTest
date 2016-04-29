#! /usr/bin/env python
#coding=utf-8
'''
本脚本用于将xml格式数据模型转换成可用于xacs导入格式的文件
Python 版本 2.7
lxml  https://pypi.python.org/pypi/lxml/3.2.5
该脚本不支持base的方式import，尽量使用full类型xml
contact : 402245352#qq.com
'''

import sys
import copy
from lxml import etree

class syx_any(object):
    def __init__(self, ele) :
        self.type = 'any'

class syx_base64(object):
    def __init__(self, ele) :
        self.type = 'base64'
        for sub in ele:
            if sub.tag == 'size':
                self.size = size_e(sub)
        
class syx_boolean(object):
    def __init__(self, ele):
        self.type='boolean'
        
class syx_dateTime(object):
    def __init__(self, ele):
        self.type='dateTime'

class syx_hexBinary(object):
    def __init__(self,ele):
        self.type = 'hexBinary'
        for sub in ele:
            if sub.tag == 'size':
                self.size = size_e(sub)

class syx_int(object):
    def __init__(self, ele) :
        self.type = 'int'
        self.ranges = []
        self.units = None
        for sub in ele :
            if sub.tag == 'range':
                r = range_e(sub)
                self.ranges.append(r)
            elif sub.tag =='units' :
                self.units = units_e(sub)

class syx_integer(object):
    def __init__(self, ele) :
        self.type = 'integer'
        self.ranges = []
        self.units = None
        for sub in ele :
            if sub.tag == 'range':
                r = range_e(sub)
                self.ranges.append(r)
            elif sub.tag =='units' :
                self.units = units_e(sub)

class syx_long(object):
    def __init__(self, ele) :
        self.type = 'long'
        self.ranges = []
        self.units = None
        for sub in ele :
            if sub.tag == 'range':
                r = range_e(sub)
                self.ranges.append(r)
            elif sub.tag =='units' :
                self.units = units_e(sub)

class syx_unsignedInt(object):
    def __init__(self, ele) :
        self.type = 'unsignedInt'
        self.ranges = []
        self.units = None
        for sub in ele :
            if sub.tag == 'range':
                r = range_e(sub)
                self.ranges.append(r)
            elif sub.tag =='units' :
                self.units = units_e(sub)

class syx_unsignedLong(object):
    def __init__(self, ele) :
        self.type = 'unsignedLong'
        self.ranges = []
        self.units = None
        for sub in ele :
            if sub.tag == 'range':
                r = range_e(sub)
                self.ranges.append(r)
            elif sub.tag =='units' :
                self.units = units_e(sub)

class syx_string(object):
    def __init__(self, ele) :
        self.type = 'string'
        self.enumerations = []
        self.patterns = []
        self.size = None
        for sub in ele :
            if sub.tag == 'size' :
                self.size = size_e(sub)
            elif sub.tag == 'enumeration' :
                e = enumeration_e(sub)
                self.enumerations.append(e)
            elif sub.tag == 'pattern' :
                p = pattern_e(sub)
                self.patterns.append(p)
            elif sub.tag == 'pathRef':
                continue
            elif sub.tag == 'enumerationRef':
                self.enumerationRef = enumerationRef_e(sub)
         

'''
<enumerationRef targetParam="AllowedProfiles" nullValue=""/>
'''
class enumerationRef_e(object):
    def __init__(self, ele):
        self.targetParam = ele.get('targetParam')
        self.nullValue = ele.get('nullValue')
            
class pattern_e(object):
    def __init__(self, ele) :
        self.value = ele.get('value')

class enumeration_e(object):
    def __init__(self,ele):
        self.value = ele.get('value')
        self.optional = ele.get('optional')

class range_e(object):
    def __init__(self,ele):
        self.minInclusive = ele.get('minInclusive')
        self.maxInclusive = ele.get('maxInclusive')
        self.step = ele.get('step')

class size_e(object):
    def __init__(self, ele):
        self.minLength = ele.get('minLength')
        self.maxLength = ele.get('maxLength')

class units_e(object):
    def __init__(self, ele):
        self.value = ele.get('value')

class dimport (object):
    def __init__(self, node):
        self.tag = 'import'
        self.file = node.get('file')
        if 'types' in self.file :
            print 'load types define file %s ' % self.file
            typesTree = etree.parse(self.file)
            root = typesTree.getroot()
            for item in root :
                #print 'type item tag %s ' % item.tag
                if 'dataType' == item.tag :
                    name = item.get('name')
                    base = item.get('base')
                    if base != None :
                        if base in importTypes :
                            obj_syntax = copy.deepcopy(importTypes[base])
                            obj = syntax.syx
                            clazz = importTypes[base].__class__
                            for sub in item:
                                if sub.tag == 'size' :
                                    s = size_e(sub)
                                    setattr(obj, 'size', s)
                                elif sub.tag == 'pattern':
                                    p = pattern_e(sub)
                                    getattr(obj , 'patterns').append(p)
                            importTypes[name] = obj_syntax
                        else:
                            raise 'load types error , no base type %s for %s' % (base, name)
                    else:
                        syntax = dsyntax(item)
                        importTypes[name] = syntax

class dmodel(object):
    def __init__(self, node):
        self.tag = 'model'
        self.name = node.get('name')
        self.objs = []
        for obj in node :
            if obj.tag == 'object' :
                oj = dobject(obj)
                self.objs.append(oj)
            if obj.tag == 'parameter' :
                param = dparam(obj)
                self.objs.append(param)
        
class dobject(object):
    def __init__(self, node):
        self.tag = 'object'
        self.name = node.get('name')
        self.access = node.get('access')
        self.minEntries = node.get('minEntries')
        self.maxEntries = node.get('maxEntries')
        self.numEntriesParameter = node.get('numEntriesParameter')
        self.parameters = []
        self.description = ''
        for item  in node:
            if item.tag == 'description' :
                self.description = item.text
            elif item.tag == 'parameter':
                p = dparam(item)
                self.parameters.append(p)
        
    def getLine(self):
        displayName = self.name
        if displayName.find('InternetGatewayDevice') >= 0:
            displayName = self.name[split:]
        type = 'object'
        length = ''
        min = ''
        max = ''
        access = '-'
        if self.access == 'readWrite':
            access = 'W'
        default = ''
        version = ''
        descr = self.description
        
        line =  pattern % (displayName, type, length, min, max, access, default, version, oneline(descr))
        line = line.encode('utf-8','ignore')
        return line
        
class dparam (object):
    def __init__(self, node):
        self.tag = 'parameter'
        self.name = node.get('name')
        self.access = node.get('access')
        if node.get('dmr:version') != None :
            self.version = node.get('dmr:version')
        else:
            self.version = '1.0'
        for item in node :
            if item.tag == 'description' :
                self.description = item.text
            if item.tag == 'syntax':
                self.synax = dsyntax(item)
                
    def getLine(self, parentName = ''):
        length = ''
        min = ''
        max = ''
        default = ''
        version = self.version  
        displayName = (obj.name + self.name)
        if displayName.find('InternetGatewayDevice') >= 0 :
            displayName = displayName[split:]
        access = '-'
        if self.access == 'readWrite':
            access = 'W'
        descr = self.description
        type = self.synax.type
        
        #print '----------------name : %s ' % param.name
        #print param.synax.syx
        if type in ('base64', 'hexBinary', 'string') :
            if self.synax.syx.size != None:
                if self.synax.syx.size.minLength != None:
                    min = self.synax.syx.size.minLength
                if self.synax.syx.size.maxLength != None:
                    max = self.synax.syx.size.maxLength
            
        line = pattern % (displayName, type, length, min, max, access, default, version, oneline(descr))
        line = line.encode('utf-8','ignore')
        #fileline.append(line + '\n')
        #print line
        return line
        
buildInTypes=['any','base64','boolean','dateTime','hexBinary','integer','int','long','string','unsignedInt','unsignedLong']
importTypes={}

#名称	类型	长度	最小值	最大值	读写类型(W或-)	默认值	版本	描述
pattern = '%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s'

split = len('InternetGatewayDevice')

class dsyntax(object):
    def __init__(self, node):
        for item  in node:
            # xs:enumeration value="*"
            #if item.tag == 'list':  #list transfer to string
            #    item.tag = 'string'
            if item.tag in buildInTypes:
                self.type = item.tag
                className = 'syx_'+item.tag
                currentModule=sys.modules[__name__]
                clazz = getattr(currentModule, className)
                obj = clazz(item)
                self.syx = obj
            elif item.tag == 'dataType':
                exType = item.get('ref')
                sx = importTypes[exType]
                self.syx = sx.syx
                self.type = self.syx.type
                pass


model = None
imports = []

def oneline(str):
    return str.replace('\n' , '')

if __name__ == '__main__' :
    
    if len(sys.argv) < 2 :
        print 'Usage: python p.py fileName'
        sys.exit()
    
    tree = etree.parse(sys.argv[1])
#    tree = etree.parse('tr-135-1-3-full.xml') 
    root = tree.getroot()
    for item in root:
        if item.tag == 'model':
            model = dmodel(item)
        elif item.tag == 'import':
            imt = dimport(item)
            imports.append(imt)
        elif item.tag == 'dataType':
            name = item.get('name')
            base = item.get('base')
            if base != None :
                if base in importTypes :
                    obj_syntax = copy.deepcopy(importTypes[base])
                    obj = syntax.syx
                    clazz = importTypes[base].__class__
                    for sub in item:
                        if sub.tag == 'size' :
                            s = size_e(sub)
                            setattr(obj, 'size', s)
                        elif sub.tag == 'pattern':
                            p = pattern_e(sub)
                            getattr(obj , 'patterns').append(p)
                    importTypes[name] = obj_syntax
                else:
                    raise 'load types error , no base type %s for %s' % (base, name)
            else:
                syntax = dsyntax(item)
                importTypes[name] = syntax

    newFileName = sys.argv[1] + '.out.txt'
    
    file = open(newFileName, 'wb')

    for obj in model.objs:
        print 'Export first level %s ' % obj.name
        if obj.tag == 'parameter':
            line = obj.getLine()
            file.write(line + '\n')
            #print line
        elif obj.tag == 'object':
            line = obj.getLine()
            file.write(line + '\n')
            for param in obj.parameters:
                line = param.getLine(obj.name)
                #print line
                file.write(line + '\n')

    #file.writelines(fileline)            
    file.close()     
    print ''   
    print 'Export OK , see %s ' % newFileName     

