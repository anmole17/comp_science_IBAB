#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream if1("in.txt");
	ofstream of1("out.txt");
	string s1;
	char ch;

	while((if1.get(ch)) && ((if1.peek()) > 0))
			{
			cout << ch;
			of1.put(ch);
			}

			if1.seekg(0,ios::beg);
	cout<< endl;


	while(if1.get(ch))
			{
			cout << ch;
			}
			if1.close();
return(0);
}
