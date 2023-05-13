#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream if1("in.txt");
	ofstream of1("out.txt");
	string s1;
	char ch;

	while(getline(if1,s1))
			{
			cout << s1<< endl;
			of1 << s1 << endl;
			}

	cout<< endl;
	if1.close();
	of1.close();


return(0);
}
