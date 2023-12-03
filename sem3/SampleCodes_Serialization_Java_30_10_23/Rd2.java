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
