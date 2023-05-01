import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1 = "hello";
		String s2 = "hello";
		System.out.println(s1 == s2);
		s2 = "hi";
		System.out.println(s1 == s2);
		/* In this program too,its not clear why false is getting
		 * printed in the second System.out statement. Is it because
		 * values are different or is it because addresses are 
		 * different. Anyway in either case "false" value is
		 * correct !! */
	}
};
