// 1. Write a program in which you create a Vector of 15 integers. When the user enters a number, check if it matches with
// any number in the Vector. If matched, print "Yes" else print "No".

import java.util.*;

class Vect
{
	public static void main(String args[])
	{
		int val;int i;
        Scanner scan=new Scanner(System.in);
		Vector <Integer> vec = new Vector<Integer>(20);
        System.out.println("Enter 15 integer values for vector");
		for(i=0; i<15; i++){
            val=scan.nextInt();
            vec.add(val);
        }
		System.out.println("Enter a number to search in the vector:");
        val=scan.nextInt();
        System.out.println("Present or not?:");
        if(vec.indexOf(val)!=-1){
		System.out.println("Yes");
        }
        else{
            System.out.println("No");
        
        }
    }
};
