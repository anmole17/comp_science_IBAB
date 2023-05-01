import java.util.*;

class A1
{
	public static void main(String args[])
	{
		String s1 = "hello";
		String s2 = "hello";
		System.out.println(s1 == s2);
		String s3 = new String("hello");
		System.out.println(s1 == s3);
		System.out.println(s1.equals(s3));
	/* This is interesting. Since second System.out stmt print "false"
	 * it clearly means s1==s3 compared addresses of s1 and s3 and
	 * not values. Since both s1 and s3 have same value "hello", but
	 * both are at different addresses (s1 is from pool , s3 is outside
	 * pool) it prints false. ALso, s1.equals(s3) is comparing values
	 * and not addresses, and thus the third System.out printed "true".
	 * NOW YOU KNOW HOW TO USE == and equals
	 */
	}
};
