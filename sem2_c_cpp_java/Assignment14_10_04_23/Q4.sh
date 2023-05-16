#!/bin/bash

echo "To demonstrate the working of creating and using a java package"
echo "The code of the package:"
cat Q4.java|more
echo "Creating the package: wait"
sleep 2
javac -d . Q4.java 
jar -cf Q4.jar Q4/
echo "jar package is created"
ls -l
echo "The package can be tested by setting the class path;"
echo "eg. export CLASSPATH="/home/ibab/folder/Q4.jar""
echo "You can use q4_test.java to test the file" 

