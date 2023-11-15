import java.lang.*;
import java.io.*;

class A1 implements Runnable
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
A1 a1 = new A1();
a1.start();
}
};
