#include<cstdio>
class A1
{
	private:
		int i,j;
	public:
		void f1()
		{
			i=10;
			j=20;
			printf("%d %d\n",i,j);
		}
};

int main()
{
	class A1 a1;
	a1.f1();	
	return(0);
}
/*This Code shows how to write a class and create its object in main().
 * But using printf() means its not complete oop...  */
