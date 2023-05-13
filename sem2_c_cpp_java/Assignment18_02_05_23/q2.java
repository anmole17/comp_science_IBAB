// 2. Write a program to concatenate 3 files and print content onto screen.

import java.util.*;
import java.io.*;
import java.lang.*;

class Q2
{   public SequenceInputStream concat(
    FileInputStream fis1,
    FileInputStream fis2, 
    FileInputStream fis3){
        try{SequenceInputStream sis1 = new SequenceInputStream(fis1,fis2);
        SequenceInputStream sis2 = new SequenceInputStream(sis1,fis3);
		}catch(Exception e1){System.out.println(e1);}
        return sis2;
    
    }
	public static void main(String args[])
	{ Q2 q2=new Q2();
	try
	{
	FileInputStream fis1 = new FileInputStream("in1.txt");
	FileInputStream fis2 = new FileInputStream("in2.txt");
	FileInputStream fis3 = new FileInputStream("in3.txt");
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