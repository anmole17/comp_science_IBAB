#include<iostream>
#include<string>
using namespace std;

class A1
{
	private:
		int cnt1=0;
		int cnt2=0;
	public:
		int operator ++()
		{
			cout << "Hello from Pre Increment Opern" << endl;
			++cnt1;
			return(cnt1);
		}

		int operator ++(int)
		{
			cout << "Hello from Post Increment Opern" << endl;
			cnt2++;
			return(cnt2);
		}
};

int main()
{
	class A1 a1;
	int res1,res2;
	res1 = ++a1;
	res2 = a1++;
	cout << res1 << endl << res2 << endl;

	res1 = ++a1;
	res2 = a1++;
	cout << res1 << endl << res2 << endl;
}
