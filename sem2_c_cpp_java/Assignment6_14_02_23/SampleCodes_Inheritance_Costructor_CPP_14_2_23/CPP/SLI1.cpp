#include<iostream>
using namespace std;

class A
{
	public:
		void f1()
		{
			cout << "HEllo" << endl;
		}
};

class B : public A
{
	public:
		void f2()
		{
			cout << "Hi" << endl;

		}
};

int main()
{
	class A a1;
	class B b1;
	a1.f1();
	b1.f2();
}
