#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream if1("in.txt");
	string s1;

	while(getline(if1,s1))
			{
			cout << s1;
			}
			if1.close();
			return(0);
}
