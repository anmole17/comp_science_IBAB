// 2. Improvise (1) to concatenate 2 files. The Output should contain text from 1st file as 
//     it is but concent of 2nd file is reversed. 

import java.util.*;
import java.io.*;

class Q2
{   public void concat(
    FileOutputStream fos,
    FileInputStream fis1,
    String file2){
        int i; 
        try{
            while((i=fis1.read())!=-1)
		    {
			fos.write((char)i);
		    }
            byte [] b1 = file2.getBytes();
            fos.write(b1);
		}catch(Exception e1){System.out.println(e1);}
    }
    
    public String str_rev(FileInputStream fis){
        int i; 
        String s1=new String();
        try{
        while((i=fis.read())!=-1)
		{
			s1=Character.toString((char)i)+s1;
		}
        }catch(Exception e1){System.out.println(e1);}
        return s1;
    }
	public static void main(String args[])
	{   String file2=new String();
		Q2 q = new Q2();
		try
		{// Make sure to have in1.txt ready with content beforehand
        FileInputStream fis1 =new FileInputStream("in1.txt"); 
        FileInputStream fis2 =new FileInputStream("in2.txt"); 
		
		file2=q.str_rev(fis2);
        fis2.close();
        FileOutputStream fos =new FileOutputStream("out2.txt"); 
        q.concat(fos,fis1,file2);
        fis1.close();
        fos.close();
		}catch(Exception e1){System.out.println(e1);}
	}
};