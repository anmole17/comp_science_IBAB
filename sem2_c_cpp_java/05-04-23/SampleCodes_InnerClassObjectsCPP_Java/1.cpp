#include<iostream>

using namespace std;

class A1
{
	public:
		void f1()
		{
			cout << "Hello from f1 of A1" << endl;
		}

		class B1
		{
			public:
				void f2()
				{
					cout << "Hello from f2 of B1" << endl;
				}
		};
};

int main()
{
	class A1 a1;
	a1.f1();
	class A1::B1 b1;
	b1.f2();
}
