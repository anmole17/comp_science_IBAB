import java.lang.*;

class A1 extends Thread
{
public void run()
{
System.out.print("10");
}
};

//runnable implement
class A4 implements Runnable
{
public void run()
{
System.out.println("Hello");

}
};


class B1
{
public static void main(String args[])
{
try
{
A1 a1 = new A1();
a1.start();
a1.join();

//runnable implement
A4 a4 = new A4();
Thread t1 = new Thread(a4); // reate the thread obj in this case
t1.start();
}catch(Exception e1){}
}
};
