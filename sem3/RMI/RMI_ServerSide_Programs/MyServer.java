import java.rmi.*;
import java.rmi.registry.*;

public class MyServer{

public static void main(String args[]){
try{

// rmiregistry within the server JVM with 
            // port number 9000 
LocateRegistry.createRegistry(9000); 
AddNum stub=new AddNumRemote();
Naming.rebind("rmi://10.0.0.1:9000"+"/Venkat",stub);
}catch(Exception e){System.out.println(e);}
}

}
