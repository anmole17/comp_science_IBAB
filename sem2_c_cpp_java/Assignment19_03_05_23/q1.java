// 1. Write a program in Java to reverse the content of a file(character wise).

import java.util.*;
import java.io.*;

class Q1
{   public String str_rev(FileInputStream fis){
        int i; 
        String s1=new String();
        try{
        while((i=fis.read())!=-1)
		{
			s1=Character.toString((char)i)+s1;
		}
        System.out.println("Reverse:\n"+s1);
        }catch(Exception e1){System.out.println(e1);}
        return s1;
    }
	public static void main(String args[])
	{   String file_rev=new String();
		Q1 q = new Q1();
		try
		{// Make sure to have in1.txt ready with content beforehand
        FileInputStream fis =new FileInputStream("in1.txt"); 
		file_rev=q.str_rev(fis);
        fis.close();
        FileOutputStream fos =new FileOutputStream("in1.txt"); 
        byte [] b1 = file_rev.getBytes();
        fos.write(b1);
		}catch(Exception e1){System.out.println(e1);}
	}
};