import java.util.*;

interface i1
{
	void f1();
	void f2();
}

interface i2
{
	void f3();
}

class A1 implements i1,i2
{
	public void f1() {System.out.println("HI");}
	public void f2(){System.out.println("Hello");}
	public void f3(){System.out.println("ibab");}

	public static void main(String args[])
	{
		A1 a1 = new A1();
		a1.f1();a1.f2();a1.f3();
	}
};
