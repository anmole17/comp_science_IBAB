#include<iostream>

using namespace std;

class A1
{
	public:
		A1(int x)
		{
			cout << x << endl;
		}
		void f1()
		{
			cout << "HI" << endl;
		}
};

int main()
{
	A1(10).f1();
	A1(20).f1();
}
