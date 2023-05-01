import java.util.*;

class A1
{
	public void f1()
	{
		System.out.println("IBAB");
	}

	public void f2()
	{
		System.out.println("Hello");
	}
};

class B1
{
	public static void main(String args[])
	{
		new A1().f1();
		new A1().f2();
		//a1.f1();

		
	}
};
