/*
3. Write a program in java that showcases:
- String Pool
- Abstract class
- Wrapper class “Integer”
- Working of Constructor
A single program should show all the above features. The output should convince us of the
working of these concepts.
*/

import java.util.*;

abstract class Abs_pool{ // Abstract class with abstract function 

protected String str1;

abstract int sumint(String st);

public void inputabs(){
	Scanner sc= new Scanner(System.in);
	System.out.println("Enter alpha numeric string str1 for abstract class");
	str1= sc.next();

}
};


class Pool extends Abs_pool{

String str2;
String str3; 

public int sumint(String st){	// function to find the sum of numbers from the alpha numeric string
	int i, x=0, n1=0;
	System.out.println("The sum of numbers in "+ st + ": ");
	for(i=0; i< st.length(); i++){
		if(Character.isDigit(st.charAt(i))){ // Character wrapper is utilized to convert only numbers to integers
			n1 = Character.getNumericValue(st.charAt(i));
			x=x+n1;
			}
		}
	return x;
}

public Pool(){ // constructor
	Scanner sc= new Scanner(System.in);
	
	System.out.println("Initializing string values using constructor:");
	inputabs();
	System.out.println("Initializing str2 for normal derived class from abstract class using `str2=str1`; utilizing same address in string pool");
	str2=str1; // without new keyword the same string address is used in string pool
	str3= new String(str1); // using new keyword initializes the string into a new address in string pool
	System.out.println("Initializing another string str3 with same value as str1 but different address using `str3= new String(str1);` Str3="+str3);
	
}

public void str_pool(){
	
	System.out.println("Function checking if the strings entered have same value, if so are they stored in same address in the string pool");
	if(str2.equals(str1)){ 
	System.out.println("The strings str1 and str2 have same value");
	}
	else{
	System.out.println("The strings str1 and str2 are different.");
	}
	if(str2==str1){ // == signifies checking address and not the value
	System.out.println("The strings str1 and str2 have the same address");
	}
	else{
	System.out.println("The strings str1 and str2 have different address");
	}
	if(str3.equals(str1)){
	System.out.println("The strings str3 and str1 have same value");
	}
	else{
	System.out.println("The strings str3 and str1 are different.");
	}
	if(str3==str1){
	System.out.println("The strings str3 and str1 have the same address");
	}
	else{
	System.out.println("The strings str3 and str1 have different address");
	}
	
}

public void wrap_int(){
	String st1;
	Scanner sc= new Scanner(System.in);
	System.out.println("Let us calculate the sum of the numbers in the string");
	Integer sum=sumint(str1); // auto wrapper converting int basic data type from 
							// function into Integer type object i.e. autoboxing 
	System.out.println("The numbers are converted from alpha numeric string into Integer using wrappers");

	System.out.println("The sum of numbers in : "+ str1+ " is "+ sum );
	System.out.println("Enter a string of numbers to be added into the sum");
	st1= sc.next();
	Integer num= Integer.parseInt(st1);// utilizing Integer wrapper function
	System.out.println("The sum of numbers is : "+ sum + " + "+ st1+" ="+(sum+num) );

}

public static void main(String args[]){
	Pool p1= new Pool();
	p1.str_pool(); // checking if the strings are of equal value and have same address in string pool.
	//Abs_pool a1=new Abs_pool() abstract class objects cannot be made 
	p1.wrap_int();
}

};
