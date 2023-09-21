//4. Create and run 3 threads in such a way, that there is a chain of threads. Ex: Thread A will run and then create and 
//run Thread B, which in turn will create and run Thread C.
import java.lang.*;

class Task3 extends Thread
{
public void run()
{
System.out.println("Task 3");

}
};
class Task2 extends Thread
{
public void run()
{
System.out.println("Task 2");
Task3 t3 = new Task3();
t3.start();
}
};

class Task1 extends Thread
{
public void run()
{
System.out.println("Task 1");
Task2 t2 = new Task2();
t2.start();
}
};



class App
{
public static void main(String args[])
{
try{
Task1 t1=new Task1();
t1.start();

}
catch(Exception e){}

}
};
