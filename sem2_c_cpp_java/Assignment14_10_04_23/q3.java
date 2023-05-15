// 3. Try (1) in Java . To do this, first import java.lang.Math. (might work without importing too..but better import.)
// Then use Math.sqrt(number) and Math.cbrt(number) to calculate square root and cube root respectively.

import java.util.*;
import java.lang.Math;

class Q3{
    public static void main(String args[]){
        Scanner scn= new Scanner(System.in);
        try{
            System.out.println("Enter a number to get it's square root and cube root:");
            double num = scn.nextDouble();
            double sqrt=Math.sqrt(num);
            double cbrt=Math.cbrt(num);
            System.out.println("Square root: "+sqrt+" and Cube root: "+cbrt);
            
        }catch(Exception e1){
            System.out.println("Enter a valid number!!");
        
        }
    }

};