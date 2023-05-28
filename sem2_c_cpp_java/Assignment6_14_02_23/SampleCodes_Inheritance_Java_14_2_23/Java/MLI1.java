import java.util.*;

class A1
{
	public void f1()
	{
		System.out.println("Hello");
	}

};

class B1 extends A1
	{
		public void f2()
		{
			System.out.println("Hello from B1");
		}
		public static void main(String args[])
		{
			C1 c1 = new C1();
			c1.f1();
			c1.f2();
			c1.f3();
		}
	};

class C1 extends B1
{
	public void f3()
	{
		System.out.println("Hello from C1");
	}
};


