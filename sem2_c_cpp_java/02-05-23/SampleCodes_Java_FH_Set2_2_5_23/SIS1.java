import java.util.*;
import java.io.*;
import java.lang.*;

class A1
{
	public static void main(String args[])
	{
	try
	{
	FileInputStream fis1 = new FileInputStream("in1.txt");
	FileInputStream fis2 = new FileInputStream("in2.txt");
	int i;
	SequenceInputStream sis1 = new SequenceInputStream(fis1,fis2);
	while((i=sis1.read())!=-1)
	{
		System.out.print((char)i);
	}

	}
	catch(Exception e1){}
	}
};

