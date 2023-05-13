#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream if1("in.txt");
	string s1;
	char ch;

	while(if1.get(ch))
			{
			cout << ch;
			}
			if1.close();
			return(0);
}
