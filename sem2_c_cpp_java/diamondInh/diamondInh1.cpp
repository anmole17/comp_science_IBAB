#include<iostream>
using namespace std;

class A1
{
	public:
		void f1()
		{
			cout << "From A1" << endl;
		}
};

class B1 : public A1
{
	public:
		void f2()
		{
			cout << "From B1" << endl;
		}
};

class C1 : public A1
{
	public:
		void f3()
		{
			cout << "From C1" << endl;
		}
};

class D1 : public B1, public C1
{
	public:
		void f4()
		{
			cout << "From D1" << endl;
		}
};

int main()
{
	class D1 d1;
	d1.f1();
	d1.f2();
	d1.f3();
	d1.f4();
}
