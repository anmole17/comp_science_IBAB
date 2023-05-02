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
		int cnt=5;
		int deci_int=((num*10000-num_int*10000)); // get the decimal part out as int: easy to work with
		static int num_arr[20]={0};
		while(rem1==0){
			rem1=deci_int%10;
			if(rem1==0)
			{deci_int=deci_int/10;
			}
			cnt--;
		}
		int mult=1;
		while(cnt>0){ mult=mult*10;cnt--;}
		cout<<deci_int<<" "<<cnt<<endl;
		num=(num*(mult))+deci_int;
		cout<<num<<endl;
		
		int r=0;
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
