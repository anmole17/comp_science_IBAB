#include<iostream>
using namespace std;

class A1
{
	private:
		int i;

	public:
		friend void f2();
};

void f2()
{
	class A1 a1;
	a1.i=20;
	cout<<a1.i<<endl;
}

int main()
{
	f2();
}
