/*
2. Improvise(1) and another method to first abstract class (with definition) to take three numbers and add the same. 
Use this function in the first derived class along with other two methods you would have implemented in first question.

*/

#include<iostream>
using namespace std;

class Abs1
{
	public:
		virtual void add(float a, float b)=0;
		virtual	void cnt(int a)=0;
		
		
		void add3(float a, float b, float c){
			cout <<"The sum of the numbers is: "<<a+b+c<< endl;
		}
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
	float a,b,c;
	int d;
	cout<<"Enter two numbers to add:"<<endl;
	cin>>a>>b;
	d1.add(a,b);
	cout<<"Enter three numbers to add:"<<endl;
	cin>>a>>b>>c;
	d1.add3(a,b,c);
	cout<<"Enter an integer to find number of digits in it."<<endl;
	cin>>d;
	d1.cnt(d);
	
	
	cout<<"Enter two numbers to substract:"<<endl;
	cin>>a>>b;
	d2.sub(a,b);
	cout<<"Enter an integer to reverse the digits in it."<<endl;
	cin>>d;
	d2.rev(d);
	
	return(0);	
	
	
}
