import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1="heLLo";
		System.out.println(s1.indexOf('L'));

		System.out.println(s1.indexOf('L'));
		//Both the times, this prints 2 as index
		//as method indexOf gets only first occurance
		//of a character
	}
};
