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
notify();
}catch(Exception e1){}
}
else
if(i>5)
{
try
{
i=0;
wait();
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
c1.count(5);
}
};

class App2
{
public static void main(String args[])
{
counter c1= new counter();
A1 a1 = new A1(c1);
B1 b1 = new B1(c1);
a1.start();
b1.start();
}
};























