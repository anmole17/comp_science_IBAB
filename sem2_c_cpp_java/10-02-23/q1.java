//1. Write a program to read 3 integer numbers that are input by user and print the same onto screen.
import java.util.*;

class Q1{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter three integers:");
        int n1= input.nextInt();
        int n2= input.nextInt();
        int n3= input.nextInt();
        System.out.println("The Numbers are: " + n1+ " "+ n2+" "+n3);
    }
}