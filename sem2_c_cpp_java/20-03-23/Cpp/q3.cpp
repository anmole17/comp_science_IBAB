/*
3. Improvise(1) wherein the second derived class can work / utilise all 4 methods of both abstract classes, so that creating
object of second derived class will help us to  use all the methods of abstract 1 and 2.

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

class Der2 : public Abs2, public Der1
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
	class Der2 d2;
	float a,b;
	int c;
	cout<<"Enter two numbers to add:"<<endl;
	cin>>a>>b;
	d2.add(a,b);
	cout<<"Enter an integer to find number of digits in it."<<endl;
	cin>>c;
	d2.cnt(c);
	
	cout<<"Enter two numbers to substract:"<<endl;
	cin>>a>>b;
	d2.sub(a,b);
	cout<<"Enter an integer to reverse the digits in it."<<endl;
	cin>>c;
	d2.rev(c);
	
	return(0);	
	
	
}
