import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1="Hello How are you";
		System.out.println(s1.contains("How"));
		System.out.println(s1.contains("Hell"));
		System.out.println(s1.contains("o H"));
		//All the above three stmts print true
		System.out.println(s1.contains("am"));
		//This above stmt prints false
		//So contains method chks for a substring
	}
};
