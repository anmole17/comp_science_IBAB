import java.util.*;

class A1
{
	public static void main(String args[])
	{
		int val;
		Vector <Integer> v1 = new Vector<Integer>(5);
		v1.add(10);
		v1.add(20);
		v1.add(30);
		System.out.println(v1);
		val=v1.get(1);//Getting element at position 1
		System.out.println(val);
	}
};
