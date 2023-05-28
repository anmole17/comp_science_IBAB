import java.io.*;
import java.util.*;

class A1
{
	public static void main(String args[])
	{
		try
		{
		FileWriter fwr1 = new FileWriter("out.txt");
		String s1;
		int cnt;
		Scanner sc1 = new Scanner(System.in);

		for(cnt=0;cnt<4;cnt++)
		{
			s1=sc1.nextLine();
			fwr1.write(s1+"\n");
		}

		fwr1.close();

		FileReader fr1 = new FileReader("out.txt");
		char [] a1 = new char [100]; 
		fr1.read(a1);
		System.out.println(a1);
		}catch(Exception e1){}
	}
};
