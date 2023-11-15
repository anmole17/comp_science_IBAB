import java.util.*;
import java.io.*;

class Wr3 implements Serializable /*Mandate*/
{
int Age=23;int Ht=11; int wt=65;/*Two Data Items */
};

class Wr1 extends Wr3
{
public static void main(String args[])
{
Wr1 a1 = new Wr1();/*Creating Object*/// Both We1 and Wr3 creates same .ser of base class

try
{
FileOutputStream fout1 = new FileOutputStream("out.ser");
ObjectOutputStream obj1 = new ObjectOutputStream(fout1);
obj1.writeObject(a1);/*Dumping of object a1 onto out.ser */
obj1.flush();/*Just making sure nothing is left in buffer*/
obj1.close();
}
catch(Exception e1){}
}
}; 
