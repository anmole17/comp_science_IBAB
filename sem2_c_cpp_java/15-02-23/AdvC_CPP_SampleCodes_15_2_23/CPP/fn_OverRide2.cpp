#include<iostream>
using namespace std;
class A1
{
	public :
		void f1()
		{
			cout << "Hello from A1" << endl;
		}
};

class B1: public A1
{
	public:
		void f1()
		{
			cout << "Hello from B1" << endl;
		}
};

class C1:public B1
{
	public:
		void f1()
		{
			cout << "Hello from C1" << endl;
		}
};

int main()
{
	class C1 b1;
	b1.f1();
}
