#include<iostream>
#include<string>
using namespace std;

class A1
{
	public:
		void operator ++()
		{
			cout << "Hello from Pre Increment Opern" << endl;
		}

		void operator ++(int)
		{
			cout << "Hello from Post Increment Opern" << endl;
		}
};

int main()
{
	class A1 a1;
	++a1;
	a1++;
}
