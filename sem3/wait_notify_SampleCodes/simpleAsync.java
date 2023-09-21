import java.lang.*;
import java.util.*;

class Obj 
{
private int val=0;

public int catCh()
{
System.out.println("Caught Value is -> "+val);
return(val);
}

public void thrw(int val)
{
this.val=val;
System.out.println("Thrown Value is -> "+val);
}
};

class Thrw extends Thread
{
Obj a1;
Thread t1;

Thrw(Obj a1)
{
this.a1 = a1;
t1=new Thread(this, "Thrower");
System.out.println(Thread.currentThread().getName());
System.out.println(t1.getName());
}

public void run()
{
int cnt=0;

while(true)
{
a1.thrw(cnt++);
}
}
};

class catCh extends Thread
{
Obj a1;
Thread t1;

catCh(Obj a1)
{
this.a1 = a1;
t1=new Thread(this, "catcher");
}

public void run()
{
while(true)
{
a1.catCh();
}
}
};

class TC
{
public static void main(String args[])
{
Obj obj1=new Obj();
Thrw th = new Thrw(obj1);
catCh cat = new catCh(obj1);

th.t1.start();
cat.t1.start();

}
};



