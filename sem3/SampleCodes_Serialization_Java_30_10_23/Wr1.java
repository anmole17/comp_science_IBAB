import java.util.*;
import java.io.*;

class Wr1 implements Serializable /*Mandate*/
{
int Age=23;int Ht=11; 
/*Two Data Items */
public static void main(String args[])
{
Wr1 a1 = new Wr1();/*Creating Object*/

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
