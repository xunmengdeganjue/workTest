#! /bin/bash

	flock -n lock.txt  
    	[ $? -eq 1 ] && { echo "fail"; exit; }  
    	echo $$  
