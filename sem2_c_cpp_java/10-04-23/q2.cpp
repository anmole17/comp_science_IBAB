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
	int *digits(double num){ // helps convert double into an integer with same digits
		int num_int=num; // get number without decimal
		int rem1=0;
		int deci_int=((num-num_int)*1000); // get the decimal part out as int: easy to work with
		static int num_arr[20]={0};
		while(rem1==0){
			rem1=deci_int%10;
			if(rem1==0)
			{deci_int=deci_int/10;
			}
		}
		int r=0;
		cout<<deci_int<<setprecision(4);
		while(r!=0)
		{
		
		}
		return num_arr;
	}

	
};
int main(){
double n;
cout<<"Enter a number; accepted decimal till 4 points for input."<<endl;
cin>>n; // takin decimal input
root rt;
rt.digits(n);


return(0);

}
