import java.util.*;

class A1
{
	public void f1()
	{
		System.out.println("Hello");
	}

	public static void main(String args[])
	{
		B1 b1 = new B1();
		b1.f1();
		b1.f2();
	}
};

class B1 extends A1
	{
		public void f2()
		{
			System.out.println("Hello from B1");
		}
	};


