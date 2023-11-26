import java.rmi.*;
public interface AddNum extends Remote{

public int Add(int x, int y) throws RemoteException;
}
