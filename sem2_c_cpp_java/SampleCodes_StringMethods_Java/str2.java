import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1="heLLo";
		System.out.println(s1);
	        String s2=s1.replace('L','m');
		System.out.println(s2);
		// Only s2 contains changed string. s1 remains
		// unchanged.
		// Also, replace is case sensitive method
		// 'L' is different from 'l' in this case.
		

	}
};
