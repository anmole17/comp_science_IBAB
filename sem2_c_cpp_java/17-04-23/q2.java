// 2. Write a program in which you create 2 Vectors . Create a third one, that has all elements of first Vector followed by all
// elements of second Vector

import java.util.*;

class Vect
{
    public Vector<Integer> init(){
        Scanner scan=new Scanner(System.in);
        Vector <Integer> vec = new Vector<Integer>(15);
		int val, i;
        for(i=0; i<10; i++){
            val=scan.nextInt();
            vec.add(val);
        }
        return vec;
    }
    public Vector<Integer> concat(Vector<Integer> v1, Vector<Integer> v2){
        Vector <Integer> vec = new Vector<Integer>(15);
		int i;
        for(i=0; i<v1.size(); i++){
            vec.add(v1.get(i));
        }
        for(i=0; i<v2.size(); i++){
            vec.add(v2.get(i));
        }
        return vec;
    }
	public static void main(String args[])
	{
		Vect vect= new Vect();
		Vector <Integer> vec1 = new Vector<Integer>(15);
		Vector <Integer> vec2 = new Vector<Integer>(15);
        System.out.println("Enter 10 integer values for vector 1");
		vec1= vect.init();
        System.out.println("Enter 10 integer values for vector 2");
		vec2= vect.init();
		Vector <Integer> vec3 = new Vector<Integer>(15);
        vec3= vect.concat(vec1, vec2);
        System.out.println("Vector 3: "+ vec3);
		
        
    }
};