/*
Write a CPP program, where you have 3 data items (int, float, char) and use private access
specifier for data. Then use public access specifier and define 2 methods f1() and f2().
f1() initialised int,float vals and adds them and prints the result. f2() initialises the character
value and prints the same. Now create object and invoke f1() and f2(). Note down the 
observations.
*/

#include<iostream>

using namespace std;
class A1
{
private:
	int i;
	float j;
	char k;

public:
	void f1()
	{
		i=13;
		j=31.65;
		cout<<"From f1(): "<<i+j<<endl;
	}
	void f2()
	{
	k='k';
	cout<<"From f2(): "<<k<<endl;
	}

};

int main()
{
	class A1 a1;
	a1.f1();
	a1.f2();
	return(0);
}

/*
Output:

44.650
k

Standard example of a class: the data is private and the methods are public. The data cannot be initialized outside class as it is private. The methods can be called outside class as they are public.

*/
