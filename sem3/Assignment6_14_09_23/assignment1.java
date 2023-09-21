//1. Create and run 3 threads each with the same task.

import java.lang.*;

class Task extends Thread
{
public void run()
{
System.out.print("Hello!");
}
};


class App
{
public static void main(String args[])
{
Task t1=new Task();
Task t2=new Task();
Task t3=new Task();
t1.start();
t2.start();
t3.start();
}
};
