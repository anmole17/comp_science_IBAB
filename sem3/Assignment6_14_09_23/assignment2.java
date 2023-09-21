//1. Create and run 3 threads each with the same task.
//2. Improvise (1) with each thread working on different tasks.

import java.lang.*;

class Task1 extends Thread
{
public void run()
{
System.out.println("Hello!");
}
};
class Task2 extends Thread
{
public void run()
{
System.out.println("IBAB");
}
};
class Task3 extends Thread
{
public void run()
{
System.out.println("Okay");
}
};

class App
{
public static void main(String args[])
{
Task1 t1=new Task1();
Task2 t2=new Task2();
Task3 t3=new Task3();
t1.start();
t2.start();
t3.start();
}
};
