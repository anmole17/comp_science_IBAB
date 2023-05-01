// 2. Improvise (1) and calculate sum and product if the three numbers and print the same.
import java.util.*;

class Q2 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter three integers:");
        int n1= input.nextInt();
        int n2= input.nextInt();
        int n3= input.nextInt();
        System.out.println("The Numbers are: " + n1+ " "+ n2+" "+n3);
        System.out.println("The Sum of numbers is: " + (n1+n2+n3) +"\n The product is: "+ (n1*n2*n3));
    }
    
}
