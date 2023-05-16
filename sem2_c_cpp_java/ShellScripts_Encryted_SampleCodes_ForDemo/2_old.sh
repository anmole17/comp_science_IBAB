#!/usr/bin/bash
echo " Welcome to this demo of Constructor in Java"
echo " "
echo " The name of Java Source code is const.java "
echo " "
echo " Pls wait..."
sleep 5
echo " Listing the files in the current folder...."
sleep 4 
ls -l
echo " "
echo " "
echo " You can see const.java is not yet created..."
echo " "
sleep 5 
echo "Automatically creating Java source code that has constructor"
echo " "
echo "The name of the source code would be const.java "
echo " "
echo "Pls wait for few seconds..."
sleep 5
echo "import java.util.*;" >> const.java
echo "class A1 {" >> const.java
echo "A1() {" >> const.java
echo "System.out.println(\"Hello from constructor of A1\");" >> const.java
echo "}" >> const.java
echo "};" >> const.java
echo " " >> const.java
echo "class B1 {" >> const.java
echo "public static void main(String args[]){" >> const.java
echo "A1 a1 = new A1();" >> const.java
echo "}" >> const.java
echo "};" >> const.java
echo " "
sleep 5
echo "Java source code is ready "
echo " "
sleep 5
echo " Lets list the files again...."
ls -l
echo " The current list shows Java code const.java "
sleep 5
echo " "
echo " Here is the source code generated...."
sleep 5
echo "___________________________________________"
echo " "
cat const.java
echo " "
echo "___________________________________________"
echo " "
echo " "
echo " In this code class B1 just creates A1 object " 
sleep 7
echo " "
echo "Now automatically compiling this code to generate ByteCodes"
javac const.java
echo "Pls Wait... "
sleep 5
echo "Compilation completed..."
sleep 4
echo "Pls wait..."
sleep 4
echo " "
echo "Checking the folder for byte codes"
ls -l
echo " "
echo "Above listing shows A1 and B1 bytecodes".
sleep 4
echo "Running B1 Now..."
sleep 4
java B1
echo " "
sleep 4
echo "As per the code generated B1 just creates A1 object"
sleep 4
echo "The output here confirms that constructor of A1 was invoked"
sleep 3
echo "Pls Wait ..."
sleep 3
echo "Now removing .class files and const.java as well to clean up"
sleep 5
echo " "
rm *.class const.java
echo " "
sleep 4
echo " Files deleted....Now listing again to validate deletion"
sleep 3
ls -l
echo " "
sleep 5
echo "End of Demo...Thanks!!"

