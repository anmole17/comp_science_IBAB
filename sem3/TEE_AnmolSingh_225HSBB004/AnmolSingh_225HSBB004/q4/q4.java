import java.lang.*;
import java.io.*;
import java.util.*;
class File1 extends Thread
{
public void run()
{String s1;
try{
FileWriter fwr1 = new FileWriter("input1.txt");
		
		int cnt;
		Scanner sc1 = new Scanner(System.in);
		System.out.println("Enter 4 lines for 'input1':");
		for(cnt=0;cnt<4;cnt++)
		{
			s1=sc1.nextLine();
			fwr1.write(s1+"\n");
		}
		fwr1.close();}
		catch(Exception e){System.out.println(e);}
}
};

class File2 extends Thread
{
public void run()
{String s1;
try{
FileWriter fwr1 = new FileWriter("input2.txt");
int cnt;
		Scanner sc1 = new Scanner(System.in);
		System.out.println("Enter 4 lines for 'input2':");
		for(cnt=0;cnt<4;cnt++)
		{
			s1=sc1.nextLine();
			fwr1.write(s1+"\n");
		}
		fwr1.close();}
		catch(Exception e){System.out.println(e);}
}
};
class Concat extends Thread
{
public void run()
{	int i;
    try{
    FileInputStream fis1 = new FileInputStream("input1.txt");
    FileInputStream fis2 = new FileInputStream("input2.txt");
    FileOutputStream fos1 = new FileOutputStream("output.txt");
    SequenceInputStream sis = new SequenceInputStream(fis2,fis1);
    while((i=sis.read())!=-1)
	{
		fos1.write((char)i);
	}
	fos1.close();
	fis1.close();
	fis2.close();
	
	}
	catch(Exception e){System.out.println(e);}
}
};

class Q4
{
public static void main(String args[])
{
try
{
File1 f1 = new File1();
f1.start();
f1.join();

File2 f2 = new File2();
f2.start();
f2.join();
Concat c1 = new Concat();
c1.start();

}catch(Exception e){System.out.println(e);}
}
};
