// application to test the package Q4

import java.util.*;
import Q4.*;

class Maths{
    public static void main(String args[]){
    Scanner scn= new Scanner(System.in);
    Q4 math = new Q4();
    try{
        System.out.println("Enter a number to get it's square root and cube root:");
        float num = scn.nextFloat();
        float sqrt=math.sqrt(num);
        float cbrt=math.cbrt(num);
        float sqr=math.square(num);
        float cbr=math.cube(num);
        String.format("%.5f", sqrt);
        String.format("%.5f", cbrt);
        String.format("%.5f", cbr);
        String.format("%.5f", sqr);
        
        System.out.println("Square root: "+String.format("%.5f", sqrt)+
                            "; Cube root: "+String.format("%.5f", cbrt)+
                        "; Square: "+String.format("%.5f", sqr)+
                        "; Cube: "+String.format("%.5f", cbr));
        
    }catch(Exception e1){
        System.out.println("Enter a valid number!!");
    }
}
};