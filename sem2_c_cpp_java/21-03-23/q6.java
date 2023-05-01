/*
6. Write a program in which you will send a string with characters and numerics combination, extract only numbers and print the same.
*/

import java.util.*;

class Q6{
	public static void main(String args[]){
	int i, x=0, n1;
	System.out.println("Numbers in "+ args[0]+": ");
	for(i=0; i< args[0].length(); i++){
		if(Character.isDigit(args[0].charAt(i))){
			n1 = Character.getNumericValue(args[0].charAt(i));
			System.out.println(n1);
			}
		}
	}
};

