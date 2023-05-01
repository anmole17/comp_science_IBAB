import java.util.*;

abstract class A1
{
	abstract public void f1(){};
};

class B1 extends A1
{ 
	public void f1(){
	}
	public static void main(String args[])
	{
		B1 a1 = new B1();
		a1.f1();
	}
};

