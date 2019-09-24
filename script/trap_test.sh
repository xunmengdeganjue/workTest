#! /bin/sh




trap  "rm -rf hello.txt;exit 1" 2 15 30 31




while [ 1 ];do


        echo nihao
        sleep 1

done

