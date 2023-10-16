//2. Create 3 threads such that they are chained (t1 starts t2   which starts t3)
// T1 ->T2 -> T3
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
