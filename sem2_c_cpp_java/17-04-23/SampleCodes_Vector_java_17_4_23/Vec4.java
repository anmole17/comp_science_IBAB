import java.util.*;

class A1
{
	public static void main(String args[])
	{
		Vector v1 = new Vector(5);
		System.out.println(v1.capacity());
		System.out.println(v1.size());
		v1.add(10);
		v1.add(20);
		v1.add(30);
		System.out.println(v1.capacity());
		System.out.println(v1.size());
	}
};
