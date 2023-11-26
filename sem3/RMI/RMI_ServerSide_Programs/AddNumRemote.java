import java.rmi.*;
import java.rmi.server.*;

public class AddNumRemote extends UnicastRemoteObject implements AddNum{

AddNumRemote() throws RemoteException{
super();
}

public int Add(int x, int y)
{
System.out.println("Received two Numbers from Client 10.0.0.2....");
System.out.println("Numbers are "+x+" "+y+ " "+ "and Sum is "+(x+y));
return(x+y);
}
}
