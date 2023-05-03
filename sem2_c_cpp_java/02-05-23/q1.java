// 1. Write a program that copies one file content to two different files. (Creating two copies of original)

import java.util.*;
import java.io.*;

class Q1
{   public void copy_2(FileInputStream fis, FileOutputStream fos1, FileOutputStream fos2){
        int i;
        try{
        while((i=fis.read())!=-1)
		{
			fos1.write((char)i);
            fos2.write((char)i);
		}
        }catch(Exception e1){System.out.println(e1);}
    }
	public static void main(String args[])
	{
		 Q1 q = new Q1();
		try
		{// Make sure to have in1.txt and in2.txt ready with content beforehand
		FileInputStream fis1 =new FileInputStream("in1.txt"); 
		FileOutputStream fos1 = new FileOutputStream("out1_1.txt");
		FileOutputStream fos2 = new FileOutputStream("out1_2.txt");
		q.copy_2(fis1,fos1,fos2);
		}
		catch(Exception e1){System.out.println(e1);}
	}
};