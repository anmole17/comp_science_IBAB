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
	if1.seekg(0,ios::beg);
//The while loop below may not work because of the eof issue
//which i discussed. This means seekg not working in this case!!.
	while(if1.get(ch))
			{
			cout << ch;
			}
return(0);
}
