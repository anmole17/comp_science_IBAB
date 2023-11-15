/*1.Write a normal java application to be run from command prompt . Create a vector of vectors. Let the inner vectors contain numbers and strings. Print the vector of vectors once. Then check how many 0s are present in the entire vector. Print the count.
Ex
V1 could be 
[[ 10,20,30,hi,hello],[ 1,2,3,ten0,eleven0],[]hello,hi,ibab,0,330]]

Total 0s will be 7.
*/

import java.io.*;
import java.util.*;
import java.lang.*;

class assign1
{
public static void main(String[] args)
{// we can change the specificity of vector type by adding <WrapperClass>; it is always a good practice to do so;
Vector<Vector<String>> vect1 = new Vector<Vector<String>>();
Scanner sc= new Scanner(System.in);

int i,j;
for(i=0; i<3;i++){
Vector<String> vect2 =new Vector<String>();
System.out.println("Enter Vector "+i);
for(j=0;j<3;j++){
System.out.println("Enter element "+j);
vect2.add(sc.next());
}
vect1.add(vect2);
}


for(i=0; i<3;i++){
String st1;
for(j=0;j<3;j++){

}
vect1.add(vect2);
}

System.out.println(vect1);

}

};
