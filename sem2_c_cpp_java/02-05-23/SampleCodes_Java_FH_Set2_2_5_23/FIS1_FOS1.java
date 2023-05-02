import java.util.*;
import java.io.*;

class A1
{
	public static void main(String args[])
	{
		int i;
		try
		{
		FileInputStream fis1 =new FileInputStream("in1.txt");
		FileOutputStream fos1 = new FileOutputStream("out1.txt");
		while((i=fis1.read())!=-1)
		{
			fos1.write(i);
		}
		}
		catch(Exception e1){}
	}
};
