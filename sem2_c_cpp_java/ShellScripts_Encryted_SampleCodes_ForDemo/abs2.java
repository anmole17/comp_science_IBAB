import java.util.*;

abstract class A1
{
	abstract public void f1();
};

class B1 extends A1
{
	public void f1()
	{
		System.out.println("Hello");
	}
};

class C1
{
	public static void main(String args[])
	{
		B1 b1 = new B1();
		b1.f1();
	}
};
