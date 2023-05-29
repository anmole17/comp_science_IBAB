import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1="I am Here.How are You?How is everything";
		int pos = s1.indexOf('H');
		while (pos >= 0)
		{
		System.out.println(pos);
		pos=s1.indexOf('H',pos+1);
		}
		// Here we use own logic to get index of all
		// occurances of 'H'
	}
};
