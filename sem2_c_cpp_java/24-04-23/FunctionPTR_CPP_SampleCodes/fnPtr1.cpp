#include<iostream>
using namespace std;
int f1()
{
	cout << "hello" << endl;
	return(0);
}

int main()
{
	int (*fptr)();
	fptr=&f1;
	(*fptr)();
}

