// 2. Write a program to concatenate 3 files and print content onto screen.

import java.util.*;
import java.io.*;
import java.lang.*;

class Q2
{   public SequenceInputStream concat(
    FileInputStream fis1,
    FileInputStream fis2, 
    FileInputStream fis3){
        SequenceInputStream sis1 = new SequenceInputStream(fis1,fis2);
        SequenceInputStream sis2 = new SequenceInputStream(sis1,fis3);
		
        return sis2;
    
    }
	public static void main(String args[])
	{ Q2 q2=new Q2();
	try
	{ 
	Scanner sc =new Scanner(System.in);
	System.out.println("Enter name of 3 files:");
	String s1 = sc.next();
	String s2 = sc.next();
	String s3 = sc.next();
	FileInputStream fis1 = new FileInputStream(s1);
	FileInputStream fis2 = new FileInputStream(s2);
	FileInputStream fis3 = new FileInputStream(s3);
	
	int i;
	SequenceInputStream sis= q2.concat(fis1,fis2,fis3);

	while((i=sis.read())!=-1)
	{
		
        System.out.print((char)i);

	}
	
    }
	catch(Exception e1){System.out.println(e1);}
	}
};