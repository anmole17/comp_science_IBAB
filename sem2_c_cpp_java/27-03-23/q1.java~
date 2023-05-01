/*
Java
1. Write a program in which you compare two strings and print if they are same. One String belongs to an abstract class and another belongs to a normal class. Take string inputs from user
*/

import java.util.*;

abstract class QA1{

protected String str1=new String();

public void inputabs(){
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter string for abstract class");
	str1= sc.next();
	
}

};


class Q1 extends QA1{

private String str2=new String();

public Q1(){
	Scanner sc= new Scanner(System.in);
	inputabs();
	System.out.println("Enter string for normal class");
	str2=sc.next();
	if(str2.equals(str1)){
	System.out.println("The strings are same");
	}
	else{
	System.out.println("The strings are different.");
	}
	
}

public static void main(String args[]){
	Q1 b1= new Q1();
}

};
