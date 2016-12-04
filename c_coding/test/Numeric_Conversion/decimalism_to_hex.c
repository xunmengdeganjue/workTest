#include <stdio.h>
#include <math.h>
/*
 返回 x 除以 y 的余数。

*/
double fmod(double x, double y){
	
	return (x/y);
	
}
/*
 返回小于或等于 x 的最大的整数值。

*/
double floor(double x){
	
	int x1=(int)x;
	return x1;
	
}
void main(){
	int q,m,k,p,s[50];
	double n;
	m=0;
	printf("\n 请输入十进制数n：");
	scanf("%lf",&n); //这个一定要输入%lf
	printf("\n 请输入转换进制数p(2-16)：");
	scanf("%d",&p);
	printf(" (%f)10=(",n);
	while(n!=0){
		q=fmod(n,p);
		n=floor(n/p);
		m++;
		s[m]=q;
	}
	for(k=m;k>=1;k--){
		if(s[k]>9){
			printf("%c",s[k]+55);
		}
		else{
			printf("%d",s[k]);
		}
	}
	printf(")%d\n",p);//位置要放到for循环后面，不然结果不在一块输出
}