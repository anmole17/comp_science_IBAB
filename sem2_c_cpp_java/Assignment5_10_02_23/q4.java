// 4. Improvise(3) and make sure the string is of minimum length 8 and print characters at position 3 and 5 in the string.
import java.util.*;

class Q4 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str="";
        while(8>str.length()){
        System.out.println("Enter a string of atleast 8 characters:");
        str = input.next();
        }
        System.out.println("The String is: " + str);
        System.out.println("The character at 3 and 5 position are:\n at 3: " + 
                                str.charAt(3)+"\n at 5: "+str.charAt(5));
        
    }
}
