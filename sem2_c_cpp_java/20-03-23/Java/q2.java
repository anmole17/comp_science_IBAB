/*
2. Improvise (1) to allow creation of different types of CARS. 
NOTE: All data and methods are your choice but the overall feel of creating a car should be good.
*/
import java.util.*;


class Wheel{
	public Wheel(){
	System.out.println("Wheels and break system attached!");
	}
	public Wheel(String args){
	System.out.println(args+" Wheels and break system attached!");
	}
};

class ChassieFrame{
	public ChassieFrame(){
	System.out.println("Chassie and frame added!");
	System.out.println("Adding Engine, Carburetor, gear box, braking system,\ntransmission, gas tank... etc to the chassie!");
	}
	
	public ChassieFrame(String args){
	System.out.println(args+" chassie and frame added!");
	System.out.println("Adding "+args+" Engine, Carburetor, gear box, braking system,\ntransmission, gas tank... etc to the chassie!");
	}
};

class Steering{
	public Steering(){
	System.out.println("Adding Steering, speed meter, radio system!!");
	}
	
	public Steering(String args){
	System.out.println("Adding "+args+" Steering, speed meter, radio system!!");
	}
};

class Gear{
	public Gear(){
	System.out.println("Adding gears and break system");
	}
	
	public Gear(String args){
	System.out.println("Adding "+args+" gears and break system");
	}
};

class Seat{
	public Seat(){
	System.out.println("Adding seats, seat belts, airbags. ");
	}
	
	public Seat(String args){
	System.out.println("Adding "+args+" seats, seat belts, airbags. ");
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
	
	public Car(String args){
	System.out.println("Creating a "+ args+"!!");
	ChassieFrame cf=new ChassieFrame(args);
	Wheel w= new Wheel(args);
	Steering st= new Steering(args);
	Gear g= new Gear(args);
	Seat s= new Seat(args);
	System.out.println("Checking break oil, engine oil, wire connections.... Syncing the systems.");
	System.out.println( args +" is ready for use!");
}
	
	
	public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	System.out.println("Which type of car do you want?\n0 for Truck, 1 for Van and 2 for Sports Car, 3 for a general car.");
	int x= sc.nextInt();
	if(x==0){
	Car car= new Car("Truck");
	}
	else if(x==1){
	Car car= new Car("Van");
	}
	else if(x==2){
	Car car= new Car("Sports car");
	}
	else if(x==3){
	Car car= new Car();
	}
	
	}

};

