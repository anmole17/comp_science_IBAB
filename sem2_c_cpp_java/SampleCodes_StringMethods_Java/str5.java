import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1="heLLo";
		String s2= s1.substring(0,2);
		System.out.println(s2);
		s2= s1.substring(1,4);
		System.out.println(s2);
		//Using substring method u can create new
		//strings which are substrings in main
		//string. Output of above stmts shows that
		//(0,2) means starts at 0 and ends at 1
		//(1,4) means starts at 1 and ends at 3
	}
};
