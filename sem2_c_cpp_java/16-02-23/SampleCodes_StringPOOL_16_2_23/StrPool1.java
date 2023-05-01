import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1 = "hello";
		String s2 = "hello";
		System.out.println(s1 == s2);
		System.out.println(s1 != s2);
		/* In this its not clear if "==" actually compares 
		 * address or value.since both s1 and s2 are from pool
		 * and have the same value and also address. Check
		 * next program for some more info */
	}
};
