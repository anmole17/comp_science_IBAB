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
	FileInputStream fis1 = new FileInputStream("in1.txt");
	FileInputStream fis2 = new FileInputStream("in2.txt");
	FileInputStream fis3 = new FileInputStream("in3.txt");
	FileOutputStream fos1 = new FileOutputStream("out2.txt");
	int i;
	SequenceInputStream sis= q3.concat(fis1,fis2,fis3);

	while((i=sis.read())!=-1)
	{
		fos1.write((char)i);
        

	}
	
    }
	catch(Exception e1){System.out.println(e1);}
	}
};