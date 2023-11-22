import java.util.*;

class A1
{
public static void main(String args[])
{
LinkedList l1 = new LinkedList();
LinkedList l2 = new LinkedList();
System.out.println(l1);
l1.add(100);
l1.add(200);
System.out.println(l1);
l1.addFirst(300);
System.out.println(l1);

l1.addLast(300);
System.out.println(l1);
l1.add("hi");
l1.addFirst("hello");
System.out.println(l1);

System.out.println(l1.get(2));
l1.remove(4);
System.out.println(l1);
l1.removeLast();

System.out.println(l1);
l1.removeFirst();
System.out.println(l1);

l2=l1;
for(int i=0;i<l1.size();i++)
{
System.out.println(l1.get(i));
}
Collections.sort(l1);
System.out.println(l1);
Collections.reverse(l1);

System.out.println(l1);
}
};
