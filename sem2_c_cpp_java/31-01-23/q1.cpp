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

/*output
q1.cpp: In function ‘int main()’:
q1.cpp:22:5: error: ‘int A1::i’ is private within this context
   22 |  a1.i=10;
      |     ^
q1.cpp:9:5: note: declared private here
    9 | int i,j;
      |     ^
q1.cpp:23:5: error: ‘int A1::j’ is private within this context
   23 |  a1.j=20;
      |     ^
q1.cpp:9:7: note: declared private here
    9 | int i,j;
      |       ^
q1.cpp:24:9: error: ‘void A1::add()’ is private within this context
   24 |  a1.add();
      |         ^
q1.cpp:11:6: note: declared private here
   11 | void add()

Conclusion: Default access specifier is private
*/
