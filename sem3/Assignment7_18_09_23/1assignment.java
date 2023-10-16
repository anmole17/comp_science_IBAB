// 1. In thread 1, print 0 → 25
// In thread 2, print 26→ 50
import java.lang.*;

class Task1 extends Thread
{
public void run()
{ int i;
for(i=0;i<=25;i++){
System.out.println(i);
}
}
};
class Task2 extends Thread
{
public void run()
{ int i;
for(i=26;i<=50;i++){
System.out.println(i);
}
}
};

class App
{
public static void main(String args[])
{
Task1 t1=new Task1();
Task2 t2=new Task2();
t1.start();
t2.start();
}
};
