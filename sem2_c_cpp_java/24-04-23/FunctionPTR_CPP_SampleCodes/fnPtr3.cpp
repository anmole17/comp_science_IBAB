#include<iostream>
using namespace std;

int f2(int x, int y)
{
	return(x+y);
}

int f1(int x, int y, int (*fptr)(int i, int j))
{
	cout << "HEllo" << endl;
	int res=(*fptr)(x,y);
	return(res);

}

int main()
{
	int (*fptr)(int i,int j);
	int (*fptr2)(int i,int j,int (*fptr)(int i, int j));
	fptr=&f2;
 	fptr2=&f1;
	int res=(*fptr2)(10,20,fptr);
	cout << res << endl;

}

