/*
2. Write a program to create an object of a class, in another class. Then pass this object onto another object of a third class. Third class object will invoke a method of the passed object. Design your own method 
Ex: Let there be a class A with some method.
There is another class B, which is designed in a way that using a method of B's object, you will create Class A object.
Then there is an object of Class C, which has a method that receives object of A, from object of B and invokes method of A's object.
*/

import java.util.*;

class A1{

public void call(){
	System.out.println("Hello from first class A1!!");
}

};

class B1{

public B1(){
	A1 a1=new A1();
	Q2 q1=new Q2(a1);
}
};

class Q2{

public Q2(A1 a){

	a.call();
}

public static void main(String args[]){
	B1 b1=new B1(); 
}
};
