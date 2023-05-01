/*
 Write a program in java that showcases multi level inheritance.
*/

import java.util.*; 
class Rectangle{
    public float area(float len, float width){
        return len*width;
    }
    public float volume(float len, float width, float height){
        float volume=area(len,width)*height;
        return (volume);

    }
};

class Circle extends Rectangle{
    public double area(float radius){
        return ((radius*radius)*Math.PI);
    }
    public double volume(float radius){
        double volume= ((4*area(radius)*radius)/3);
        return (volume);

    }
}; 
class Shapes extends Circle{
    public void cube(float len, float width, float height){
        System.out.println("The volume of the box is:"+ volume(len,width,height)+" unit cube.");

    }
    
    public void sphere(float radius){
        System.out.println("The volume of the sphere is:"+ volume(radius)+" unit cube.");

    }

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        Shapes S =  new Shapes(); 
        System.out.println("What shape do you like more, a rectangular box or a sphere?\nEnter 1 for box and 2 for a sphere, else I will exit.");
        int n = input.nextInt();
        if(n==1||n==2){
            if (n==1){
                System.out.println("Do you like big boxes?, give me it's dimentions and\nI will tell how much things it can fit? Enter 3 real numbers.");
                float l = input.nextFloat();
                float b = input.nextFloat();
                float h = input.nextFloat();
                S.cube(l,b,h);
            }

            if (n==2){
                System.out.println("Do you like big spheres?, give me it's radius and\nI will tell how much things it can fit? Enter the radius.");
                float r = input.nextFloat();              
                S.sphere(r);
            }
        }
    }

};