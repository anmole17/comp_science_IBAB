#include<iostream>
#include<string>
using namespace std;
static int cnt1=0;
static int cnt2=0;
class A1
{
	public:
		A1 operator ++()
		{
			cout << "Hello from Pre Increment Opern" << endl;
			++cnt1;
			class A1 a1;
			return(a1);
		}

		A1 operator ++(int)
		{
			cout << "Hello from Post Increment Opern" << endl;
			cnt2++;
			class A1 b1;
			return(b1);
		}

		void display_res()
		{
			cout << cnt1 << endl;
			cout << cnt2 << endl;
		}
};

int main()
{
	class A1 c1,d1,e1,f1;
	c1 = ++e1;
	d1 = f1++;
	c1.display_res();
	d1.display_res();

	c1 = ++e1;
	d1 = f1++;
	c1.display_res();
	d1.display_res();
}
