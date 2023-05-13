/*
1. Write a program in which you have 2 abstract classes .  first abstract class has methods add() and cnt() and second abstract class has methods sub() and rev().  One class derives from first abstract class and One class derives from second abstract class. 
add() is a method that takes two parameters and adds the same and prints the result. rev() takes an integer of more than 2 digits and reverses the same and prints. sub() takes two parameters and prints their difference and cnt() is a method that takes one number with more than 2 digits, calculates its length and prints the same. 
*/
#include<iostream>
using namespace std;

class Abs1
{
	public:
		virtual void add(float a, float b)=0;
		virtual	void cnt(int a)=0;
};


class Abs2
{
	public:
		virtual void sub(float a, float b)=0;
		virtual void rev(int a)=0;
};

class Der1 : public Abs1
{
	public:
		void add(float a, float b)
		{
			cout <<"The sum of the numbers is: "<<a+b<< endl;

		}
		
		void cnt(int a)
		{
		int length = 0;
		while(a>=1){
			length++;
			a=a/10;
			}
		cout<<"The length of the number is:"<< length<<endl; 
		}

};

class Der2 : public Abs2
{
	public:
	void sub(float a, float b){
		cout <<"The difference of the numbers is: "<<a-b<< endl;
	}
	void rev(int a){
		int length = 0;
		long rev = 0;
		while(a>=1){
			rev=rev*10+a%10;
			length++;
			a=a/10;
			
			}
		cout<<"The reverse of the number is:"<< rev <<endl; 
	}
	
};

int main()
{
	class Der1 d1;
	class Der2 d2;
	float a,b;
	int c;
	cout<<"Enter two numbers to add:"<<endl;
	cin>>a>>b;
	d1.add(a,b);
	cout<<"Enter an integer to find number of digits in it."<<endl;
	cin>>c;
	d1.cnt(c);
	
	cout<<"Enter two numbers to substract:"<<endl;
	cin>>a>>b;
	d2.sub(a,b);
	cout<<"Enter an integer to reverse the digits in it."<<endl;
	cin>>c;
	d2.rev(c);
	
	return(0);	
	
	
}

