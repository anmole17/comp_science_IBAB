import java.io.*;
import java.util.*;

class A1
{
	public static void main(String args[])
	{
		try
		{
		FileWriter fwr1 = new FileWriter("out.txt");
		String s1="Hello I am Venkat";

		fwr1.write(s1);
		fwr1.close();

		FileReader fr1 = new FileReader("out.txt");
		char [] a1 = new char [100]; 
		fr1.read(a1);
		int i,j=0,k=1,x;
		char [] even = new char [100];
		String s =new String();
		
		String s2 =new String();
		for(i=0; i<a1.length; i++){
			if(a1[i]!='\n' && a1[i]!=' '){
			s = s +a1[i];	
			//k++;
			}else {
			for(x=0; x<s.length();x++){
			s2 =  s.charAt(x) + s2;
			}
			s2 =s2 + " ";
			//k=1;
			System.out.print(s2);
			s2="";
			s="";}
			}
			for(x=0; x<s.length();x++){
				s2 =  s.charAt(x) + s2;
				}
				s2 =s2 + " ";
				//k=1;
				System.out.println(s2);
				s2="";
				s="";
		
		
		System.out.println(a1);
		}catch(Exception e1){}
	}
};
