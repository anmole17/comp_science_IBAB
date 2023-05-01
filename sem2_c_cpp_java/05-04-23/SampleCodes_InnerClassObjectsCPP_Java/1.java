import java.util.*;

class A1
{
	public void f1()
	{
		System.out.println("Hello from f1() of A1");
	}

	class B1
	{
		public void f2()
		{
			System.out.println("Hello from f2() of A2");
		}
	};

};

class C1
{
	public static void main(String args[])
	{
		A1 a1 = new A1();
		a1.f1();
		A1.B1 b1 = new A1().new B1();
		b1.f2();
		b1.f1();
	}
};
