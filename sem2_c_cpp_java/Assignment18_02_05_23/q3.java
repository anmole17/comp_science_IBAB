// 3. Improvise(2) and redirect the concatenated content to an output text file.

import java.util.*;
import java.io.*;
import java.lang.*;

class Q3
{   public SequenceInputStream concat(
    FileInputStream fis1,
    FileInputStream fis2, 
    FileInputStream fis3){
        SequenceInputStream sis1 = new SequenceInputStream(fis1,fis2);
        SequenceInputStream sis2 = new SequenceInputStream(sis1,fis3);
		
        return sis2;
    
    }
	public static void main(String args[])
	{ Q3 q3=new Q3();
	try
	{
		Scanner sc =new Scanner(System.in);
	System.out.println("Enter name of 3 input files:");
	String s1 = sc.next();
	String s2 = sc.next();
	String s3 = sc.next();
	FileInputStream fis1 = new FileInputStream(s1);
	FileInputStream fis2 = new FileInputStream(s2);
	FileInputStream fis3 = new FileInputStream(s3);
	System.out.println("Enter name of output file:");
	String s4 = sc.next();
	FileOutputStream fos1 = new FileOutputStream(s4);
	int i;
	SequenceInputStream sis= q3.concat(fis1,fis2,fis3);

	while((i=sis.read())!=-1)
	{
		fos1.write((char)i);
        

	}
	fos1.close();
    }
	catch(Exception e1){System.out.println(e1);}
	}
};