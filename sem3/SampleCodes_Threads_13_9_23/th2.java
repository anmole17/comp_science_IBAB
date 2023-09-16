import java.lang.*;

class A1 extends Thread
{
public void run()
{
System.out.print("HI");
}
};

class B1
{
public static void main(String args[])
{
A1 a1 = new A1();
a1.start();

A1 a2 = new A1();
a2.start();

A1 a3 = new A1();
a3.start();
}
};
