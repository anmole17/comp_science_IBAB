/*
Write a CPP program, where you have 2 data items (int, float) and use public access
specifier for data. Now under same public specifier, write a method f1() that initialises
the variables and prints the same. In main(), create the object and do direct initialisation
of data again and also invoke the method. Note down the observations.
*/

#include<iostream>

using namespace std;
class A1
{
public:
	int i;
	float j;

	void f1()
	{
	i=13;
	j=31.65;
	cout<<"From f1():"<<i<<" "<<j<<endl;
	}
};

int main()
{
	class A1 a1;
	a1.i=10;
	a1.j=20;
	cout<<"From main():"<<a1.i<<" "<<a1.j<<endl;
	a1.f1();	
	return(0);
}

/*
From main: 10 20.000000
From F1(): 13 31.650000

This shows the data items can be manipulated by funtions outside the object/class when under `public:` access specifier. 
*/
