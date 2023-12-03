import java.lang.*;
import java.util.*;

class A1 extends Thread
{  Vector<String> v1 = new Vector<String>();
public void run()
{
// Add 6 Strings to each Vector
for (int i = 0; i < 6; i++) {
    v1.add("String " + i);
    }
System.out.println("Vector 1 from A1(thread1):");   
for (int i = 0; i < 6; i++) {
    System.out.println(v1.get(i));
    }

}

};

class A2 extends Thread
{ A1 a1;
Vector<String> v1 = new Vector<String>();
Vector<String> v2 = new Vector<String>();
A2(A1 a1)
{
            this.v1 = a1.v1;
}
public void run()
{ int i=0;
// Add 6 Strings to each Vector
for (i = 6; i < 12; i++) {
    v2.add("String " + i);
    }

System.out.println("Vector 2 from A2(thread2):");   
for (i = 0; i < 6; i++) {
    System.out.println(v2.get(i));
    }
// merge the vectors the vectors
Vector<String> v3 = new Vector<String>();
for (i = 0; i < 12; i++) {
    if(i<6){v3.add(v1.get(i));}
    else{v3.add(v2.get(i-6));}
    }
System.out.println("Merged Vector:");   
for (i = 0; i < 12; i++) {
   	System.out.println(v3.get(i));
    }

Collections.sort(v3);
System.out.println("Sorted Vector:");   
for (i = 0; i < 12; i++) {
   	System.out.println(v3.get(i));
}
}
};

class B1
{
public static void main(String args[])
{try{
A1 a1 = new A1();
a1.start();
a1.join();
A2 a2 = new A2(a1);
a2.start();
}catch(Exception e){}
}
};
