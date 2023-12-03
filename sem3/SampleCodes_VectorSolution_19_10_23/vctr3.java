import java.util.*;

class A1
{
public static void main(String args[])
{
int i,j;
int chaRcnT=0;
String s1;
Vector V1 = new Vector();
Vector v1 = new Vector();
Vector v2 = new Vector();
v1.add(10);v1.add(20);v1.add(30);
v1.add("Name0"); v1.add("Name2"); v1.add("Name30");
V1.add("ibab0"); V1.add("Blore0Blore0"); V1.add("0new0");
v2.add(v1);
v2.add(v1);
v2.add(v1);
v2.add(V1);
v2.add(V1);
for(i=0;i<v2.size();i++)
{
s1=(v2.get(i)).toString();
for(j=0;j<s1.length();j++)
{
if (s1.charAt(j) == '0'){
chaRcnT++;
}
}
}
System.out.println(v2);
System.out.println("Number of 0s :"+chaRcnT);
}
};
