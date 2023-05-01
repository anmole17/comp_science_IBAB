/*
1. Write a Program in C++ that does the following:
- Contain 4 classes, namely master, squr, avg , ordr.
- master class in a way plays the role of a master or controller.
- First, a method in master will take an integer number input from the user.
- This number is sent to the class squr by master.
- squr will use one of its methods to calculate “square” of the number and returns
the result to master.
- master will then send this result from squr, along with 2 more integer numbers to
the “avg” class.
- avg class will take these 3 numbers, calculates the average and returns the same to
master.
- Now master will take the result of avg, and along with the same will send another 5
integer numbers to ordr class.
- ordr class will take all the numbers, calculates largest and smallest of these numbers,
and sends back the same to master.
- master also displays the result(s) of avg, squr and ordr.
NOTE: Use any number of methods in any of the classes. Use any technique to return
Values from any method(s). Make sure mandates not compromised.
*/
#include<iostream>

using namespace std;

class Squr{ 

	public:
	int square(int x){ // Squr class with method square
		return(x*x);
	}
};

class Avg{

	public:
	float avg(int x[]){ // Avg class with method avg --> get average value of input
	float average = (float)(x[0]+x[1]+x[2])/3;
	return average;
	}
};

class Ordr{ // ordr class uses order function to return min and max values from input array
	
	public:
	float *order(float x[]){
	int i; static float min_max[5];
	min_max[0]=x[0];
	min_max[1]=x[0];
	for(i=0; i<6;i++){
		if(min_max[1]<x[i]){
		min_max[1]=x[i];
			}
		
		if(min_max[0]>x[i]){
		min_max[0]=x[i];
			}
		}
	return min_max;	
	}
	

};

class Master{ // master class utilizes constructor to control the flow of the function
	public:
	Master(){
	int num,i;
	cout<<"Enter an integer number:"<<endl;
	cin>>num;
	
	int av[5];
	Squr sq; // using object of class Squr to square
	int square=sq.square(num);
	cout<<"The square of the number is "<< square<< endl;
	
	cout<<"Enter two more integers:"<<endl;
	cin>>av[0]>>av[1];
	av[2]=square;
	
	Avg avge; // using object of Avg to get average of square and other numbers
	float avgr=avge.avg(av);
	cout<<"The Average of "<< square<<", "<<av[0]<<" and "<<av[1]<<" is "<<avgr<< endl;
	
	float od[10]; // send
	cout<<"Enter 5 more integers:"<<endl;
	for(i=0;i<5;i++){
	cin>>od[i];
	}
	od[5]=avgr;
	Ordr ord; // using object of Ordr to find the smallest and largest values
	float *min_max;
	min_max=ord.order(od);
	cout<<"Among the average calculated and new intergers: smallest value: "<< min_max[0]<<" Largest Value: "<<min_max[1]<< endl;
	
	
	}
};


int main(){
	Master master;
	return 0;
}











