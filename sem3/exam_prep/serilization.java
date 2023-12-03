///// WRITE 
import java.util.*;
import java.io.*;

class Wr1 implements Serializable /*Mandate*/
{
int Age=23;int Ht=11; int wt=65;//transient int test ==> test will not be serilized /*Two Data Items */
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
/// Write 2 
class Wr3 implements Serializable /*Mandate*/
{
int Age=23;int Ht=11; int wt=65;/*Two Data Items */
};

class Wr1 extends Wr3 // implements Serializable /*Mandate*/ in both cases wr3 can get serilized  
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


////// REad
import java.util.*;
import java.io.*;

class Rd1
{
public static void main(String args[])
{
try
{
FileInputStream fin1 = new FileInputStream("out.ser");
ObjectInputStream obj1 = new ObjectInputStream(fin1);
Wr1 A1 = (Wr1) obj1.readObject();/*Critical. The object should be casted to the type which dumped object onto file.Imp point is that readObject() is being used to read the entire state of object */
System.out.println(A1.Age+" "+A1.Ht+" "+A1.wt);/*This is a proof that the object state was stored in .ser file as otherwise Age and Ht with values have no meaning. */
}
catch(Exception e1){}
}
};


