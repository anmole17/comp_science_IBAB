import java.io.*;
import java.util.*;

class fileWrt
{
	public static void main(String args[])
	{
		String s1="Hello";
		byte [] b1 = s1.getBytes();
		try
		{
		FileOutputStream fout1 = new FileOutputStream("out.txt");
		fout1.write(b1);
		}
		catch(Exception e1){}
	}
};
