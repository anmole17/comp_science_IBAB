/*
Write a program in CPP, to calculate square root and cube root of a number. Use the library methods
sqrt(number), cbrt(number) which will return the square root and cube root respectively. Include cmath
header before using libraries. 

2. Work on (1) without using libraries.
*/
#include<iostream>

using namespace std;

class root{
	public:
	double sqrt(double num){
		double ans=0;
		double i=num/2;
		while(i*i>num){
			i-=0.0001; 
			if (i*i==num){
				return i;
		}
		if(i*i>num*100){i=i/10;}
		}
		return (i);
	}

	double cbrt(double num){
		double ans=0;
		double i=num/2;
		while(i*i*i>num){
			i-=0.00001; 
			if (i*i*i==num){
				return i;
		}
		if(i*i*i>num*1000){i=i/10;}
		}
		return (i);
	}
};

int main(){
double n=1;
while(n==1){
cout<<"Enter a number to get it's square root and cube root:"<<endl;
cin>>n; // takin decimal input
root rt;
double sqt=rt.sqrt(n);
double cbt= rt.cbrt(n);
cout<<"Square root:"<<sqt<<endl;
cout<<"Cube root:"<<cbt<<endl;
cout<<"Try again?? Press 1"<<endl;
cin>>n;
}
return(0);
}
