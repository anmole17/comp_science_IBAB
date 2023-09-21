//3. Create and run 3 threads working with their own tasks. Synchronize any two using join.

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
try{
Task1 t1=new Task1();
Task2 t2=new Task2();
Task3 t3=new Task3();
t1.start();
t2.start();
t2.join();
t3.start();
}
catch(Exception e){}

}
};
