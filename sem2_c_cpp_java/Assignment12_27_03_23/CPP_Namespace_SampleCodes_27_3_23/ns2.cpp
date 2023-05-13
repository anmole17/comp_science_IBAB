#include<iostream>
using namespace std;
namespace ns1
{
	class A1
	{
		public:
			void f1()
			{
				cout << "HI" << endl;
			}
	};
};

namespace ns2
{
	class A1
	{
		public:
			void f1()
			{
				cout << "HELLO" << endl;
			}
	};
};

class A1
{
	public:
		void f1()
		{
			cout << "From A1's f1()" << endl;
			class ns1::A1 a1;
			a1.f1();
			class ns2::A1 a2;
			a2.f1();
		}
};

int main()
{
	class A1 a1;
	a1.f1();
}
