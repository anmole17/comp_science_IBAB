/* Write a java program in which you have 2 classes, namely Add and Diff.
Add has a method named void adding() and Diff has a method named void difference().
adding() will ask user to enter 2 integer values and finds the sum of the same and prints result.
difference() will ask user to enter 2 integer values and finds the difference and prints the same.
Derive Diff class from Add class. Create object of DIff and invoke both adding() and difference() 
methods. Improvise by taking inputs in main() and passing the same to adding() and difference(). */

import java.util.*;

class Add{
	public void adding(int num1, int num2){
	
	System.out.println("The sum of the integers is: "+(num1+num2));
	}
	public static void main(String args[]){
		Diff d1=new Diff();
		Scanner input = new Scanner(System.in);
		System.out.println("Enter two integers");
		int num1 = input.nextInt();
		int num2 = input.nextInt();
		d1.adding(num1, num2);
		d1.difference(num1, num2);	
	}

};

class Diff extends Add{
	public void difference(int num1, int num2)
	{
	System.out.println("The difference of the integers is: "+(num1-num2));
	}
};
