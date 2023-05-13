// //2. Write a program in Java that does the following:
// - It has 3 classes namely A, B , and C.
// - An object of class C, will take a "String" as input from user and passes the same to an object of A and B
// - A's object will take the string , reverses it and somehow sends this reversed string to object of B.
// - B's object will take the string from A , concatenates it will the one received from C, and displays the result.

import java.util.*;

class A {
    public String reverse(String st){
        String rev="";
        char [] ch = st.toCharArray();
        int i;
        for(i=ch.length-1; i>=0; i--){
            rev= rev+ String.valueOf(ch[i]);
        }
        System.out.println("Reverse string from A: "+rev);
        return rev;
    }
}


class B {
    public void concatenates(String s1, String s2){
        String concat;
        concat= s1+s2;
        System.out.println("Concatenated String from A and C: "+ concat);
    }
}


class C {
    public void input(){
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter a String");
        String s1=scan.next();
        String rever;
        B b = new B(); 
        A a = new A();
        rever=a.reverse(s1);
        b.concatenates(s1,rever);
        scan.close();
    }
    public static void main(String args[]){
        C c = new C();
        c.input();
    }
}
