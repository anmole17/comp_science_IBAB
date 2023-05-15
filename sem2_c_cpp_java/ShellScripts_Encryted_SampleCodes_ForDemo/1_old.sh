#!/usr/bin/bash
echo " Welcome...Pls look into this java code that has Abstract Class"
cat abs.java
echo "Press Enter Key to continue..."
read i #dummy just to get a key stroke !!!
echo "Now compiling abs.java"
javac abs.java 
echo "Since abs.java has an abstract class"
echo "its object creation fails and compiler gives out error"
echo " "
echo "Press Enter Key to move on...!!"
read i
echo "Now we use abs2.java that uses different class "
echo "that extends the abstract class and uses its features"
echo " "
echo "Press Enter Key to move on...!!"
read i
cat abs2.java |more
echo "Now compiling abs2.java ....."
echo " "
javac abs2.java
echo " "
echo "Compilation has no errors...Now lets check the folder.."
echo "Press Enter Key to move on..."
read i
clear
ls -l
echo " "
echo " Above listing shows different byte codes generated...."
echo " "
echo "Press Enter Key to move on..."
read i #Dummy input
echo "Now running C1..."
java C1
echo " "
echo " THe above steps show that abstract class cannot be "
echo "Instantiated... but can be extended"
echo " "
echo "Now cleaning the folder and removing all class files..."
rm *.class
echo " "
echo "Listing the contents again to make sure .class files are deleted"
ls -l
echo " "
echo "Thanks !!"
