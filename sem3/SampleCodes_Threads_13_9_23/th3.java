import java.lang.*;

class A1 extends Thread
{
public void run()
{
System.out.print("10");
}
};

class A2 extends Thread
{
public void run()
{
System.out.print("20");
}
};

class A3 extends Thread
{
public void run()
{
System.out.print("30");
}
};

class B1
{
public static void main(String args[])
{
A1 a1 = new A1();
a1.start();

A2 a2 = new A2();
a2.start();

A3 a3 = new A3();
a3.start();
}
};
