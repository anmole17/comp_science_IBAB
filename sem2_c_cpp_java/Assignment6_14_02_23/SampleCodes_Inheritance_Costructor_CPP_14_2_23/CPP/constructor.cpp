#include<iostream>
using namespace std;

class A1
{
	public:
		A1(int k)
		{
			cout << k;
		}
		A1(int x,int y)
		{
			cout << x <<y;
		}
};

int main()
{
	class A1 a1(10,20);
	class A1 b1(33);
}
