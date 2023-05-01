/*
 Write a Java program in which there is a class named CAR. There are many other classes too namely WHEEL, STEERING,GEAR,SEAT etc
The protocol is once you create an object of CAR, the objects of all the other classes should be automatically created to bring in more sense to
CAR  object. Use your creativity to somehow depict this on screen, wherein when we run the code, we get a feeling that "A CAR IS CREATED".
*/
import java.util.*;


class Wheel{
	public Wheel(){
	System.out.println("Wheels and break system attached!");
	}
};

class ChassieFrame{
	public ChassieFrame(){
	System.out.println("Chassie and frame added!");
	System.out.println("Adding Engine, Carburetor, gear box, braking system,\ntransmission, gas tank... etc to the chassie!");
	}
};

class Steering{
	public Steering(){
	System.out.println("Adding Steering, speed meter, radio system!!");
	}
	
};

class Gear{
	public Gear(){
	System.out.println("Adding gears and break system");
	}
};

class Seat{
	public Seat(){
	System.out.println("Adding seats, seat belts, airbags. ");
	}
};



class Car{

	public Car(){
	System.out.println("Creating a car!!");
	ChassieFrame cf=new ChassieFrame();
	Wheel w= new Wheel();
	Steering st= new Steering();
	Gear g= new Gear();
	Seat s= new Seat();
	System.out.println("Checking break oil, engine oil, wire connections.... Syncing the systems.");
	
	System.out.println("Car is ready for use!");
	
	}
	
	public static void main(String args[]){
	Car car= new Car();
	}

};
