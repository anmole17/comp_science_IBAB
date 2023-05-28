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

class C : public B
{
	public:
		void f3()
		{
			cout << "Hi from C" << endl;

		}
};
int main()
{
	class C c1;
	c1.f1();
	c1.f2();
	c1.f3();
}
