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
		v1.set(1,33);// setting or replacing the val at pos 1
		System.out.println(v1);//Print the updated Vector
		v1.add(1,44);//Add new element (insert) at specific position
		System.out.println(v1);
		v1.removeElement(44);//remove element value "44" if present
		System.out.println(v1);
	}
};
