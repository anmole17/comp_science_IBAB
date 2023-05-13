/*1. Write a CPP program in which you have 2 classes, namely Add and Diff.
Add has a method named void adding() and Diff has a method named void difference().
adding() will ask user to enter 2 integer values and finds the sum of the same and prints result.
difference() will ask user to enter 2 integer values and finds the difference and prints the same.
Derive Diff class from Add class. Create object of DIff and invoke both adding() and difference() 
methods. */

#include<iostream>

using namespace std;
class Add{
	public:
	void adding(){
	int num1, num2;
	cout<<"Enter two integers"<<endl;
	cin>>num1>>num2;
	cout<<"The sum of numbers is "<<num1+num2<<endl;
	
	}
};

class Diff:public Add
{
	
	public:
	void difference(){
	int num1, num2;
	cout<<"Enter two integers"<<endl;
	cin>>num1>>num2;
	cout<<"The difference of numbers is "<<num1-num2<<endl;
	
	}

};

int main(){
	class Diff d1;
	
	d1.adding();
	d1.difference();
	
	return(0);

}
