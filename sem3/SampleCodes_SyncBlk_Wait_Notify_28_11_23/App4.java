import java.io.*;
import java.util.*;
import java.lang.*;

class counter
{
int i;
public void count(int num)
{
synchronized(this)
{
for(i=0;i<10;i++)
{
if(i<=5)
{
try
{
notifyAll();
}catch(Exception e1){}
}
else
if(i>5)
{
try
{
i=0;
System.out.println(Thread.currentThread().getName()+" "+Thread.currentThread().getId()+" "+Thread.currentThread().getState()+" Switching Over now....");
wait(200);
}
catch(Exception e1){}
}
System.out.println(num*num*i);
try
{
Thread.sleep(250);
}catch(Exception e1){}
}
}
}
};


class A1 extends Thread
{
counter c1;
A1(counter c1)
{
this.c1=c1;
}
public void run()
{
System.out.println("From A1");
c1.count(4);
}
};

class B1 extends Thread
{
counter c1;
B1(counter c1)
{
this.c1=c1;
}
public void run()
{
System.out.println("From B1");
c1.count(5);
}
};

class C1 extends Thread
{
counter c1;
C1(counter c1)
{
this.c1=c1;
}
public void run()
{
System.out.println("From C1");
c1.count(1);
}
};

class D1 extends Thread
{
counter c1;
D1(counter c1)
{
this.c1=c1;
}
public void run()
{
System.out.println("From D1");
c1.count(7);
}
};

class App4
{
public static void main(String args[])
{
counter c1= new counter();
A1 a1 = new A1(c1);
B1 b1 = new B1(c1);
C1 d1 = new C1(c1);
D1 e1 = new D1(c1);
a1.start();
b1.start();
d1.start();
e1.start();

}
};























