/*Write a CPP program, where you have 2 data items (both int) and one method in a class.
Do not give any access specifier for both data and method. Now write main() and create
an object and try to initialise the data directly and also try to invoke the method directly.
Analyse this and note down findings.*/

#include<iostream>

using namespace std;
class A1
{
	int i,j;

	void add()
	{
		i=13;
		j=31;
		cout<<(i+j)<<endl;
	}
};

int main()
{
	class A1 a1;
	a1.i=10;
	a1.j=20;
	a1.add();	
	return(0);
}


