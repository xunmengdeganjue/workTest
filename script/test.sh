#! /bin/bash

cat << HELP
This is a test for the note information.

	
HELP


echo "Please enter your choise:"
select i in "yes" "no" "hello"
do 
	break;

done

echo "your choise is $i"



for ((i=0;i<=10;i++));do
	echo $i

done
