import java.io.*;
import java.util.*;

class A1
{
	public static void main(String args[])
	{
		try
		{
		FileReader fr1 = new FileReader("in.txt");
		FileWriter fwr1 = new FileWriter("out.txt");
		int i;
		char ch;

		while((i=fr1.read()) != -1)
		{
			System.out.print((char)i);
			fwr1.write((char)i);
		}
		}catch(Exception e1){}
	}
};
