#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream if1("in.txt");
	string s1;
	char ch;

	//This could be one way...think of other solns!!
	while((if1.get(ch)) && ((if1.peek()) > 0))
			{
			cout << ch;
			}

			if1.seekg(7,ios::beg);
	cout<< endl;


	while(if1.get(ch))
			{
			cout << ch;
			}
			if1.close();
return(0);
}
