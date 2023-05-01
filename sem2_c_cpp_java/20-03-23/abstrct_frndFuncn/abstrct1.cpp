#include<iostream>
using namespace std;

class A1
{
	public:
		virtual void f1()=0;
		void f2()
		{
			cout << "HEllo" << endl;
		}
};

class B1 : public A1
{
	public:
		void f1()
		{
			cout << "ibab" << endl;

		}

};

int main()
{
	class B1 b1;
	b1.f1();
	b1.f2();
}

