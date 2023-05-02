import java.util.*;
import java.io.*;
import java.lang.*;

class A1
{
	public static void main(String args[])
	{
	try
	{
	FileOutputStream fos1 = new FileOutputStream("out.txt");
	FileInputStream fis1 = new FileInputStream("out.txt");
	int i;
	String s1="Hello I am Venkat\nI am in Bangalore\nHow are you\n";
	byte [] b1 = s1.getBytes();
	fos1.write(b1);
	fos1.close();

	while((i=fis1.read())!=-1)
	{
		System.out.print((char)i);
	}

	}
	catch(Exception e1){}
	}
};

