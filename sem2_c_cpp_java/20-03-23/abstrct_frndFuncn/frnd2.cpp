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
	i=20;
}

int main()
{
	f2();
}
