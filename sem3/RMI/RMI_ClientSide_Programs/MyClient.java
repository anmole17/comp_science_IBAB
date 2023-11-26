import java.rmi.*;
import java.io.*;
import java.util.*;

public class MyClient{

public static void main(String args[]){
try{

AddNum stub=(AddNum)Naming.lookup("rmi://10.0.0.2:5001"+"/Venkat");
AddNum stub2=(AddNum)Naming.lookup("rmi://10.0.0.2:5002"+"/Venk2");
System.out.println("Enter two Integer Numbers");

Scanner s1 = new Scanner(System.in);
int num1=s1.nextInt();
int num2=s1.nextInt();
int num3=stub.Add(num1,num2);
int res=stub2.Add(num1,num2);
System.out.println("Sum is:" + num3);
System.out.println("Sum is:" + res);
}catch(Exception e){System.out.println(e);}
}

}
