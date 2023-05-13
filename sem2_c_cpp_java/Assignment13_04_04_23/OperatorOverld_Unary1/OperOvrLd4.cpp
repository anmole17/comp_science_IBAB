#include<iostream>
#include<string>
using namespace std;

class A1
{
	public:
		int operator ++()
		{
			cout << "Hello from Pre Increment Opern" << endl;
			return(10);
		}

		int operator ++(int)
		{
			cout << "Hello from Post Increment Opern" << endl;
			return(22);
		}
};

int main()
{
	class A1 a1;
	int res1,res2;
	res1 = ++a1;
	res2 = a1++;
	cout << res1 << endl << res2 << endl;
}
