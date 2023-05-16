/*
Write a CPP program that takes 3 integer numbers and prints which is the
smallest number and the largest number.
*/
#include<iostream>

using namespace std;

int main(){
	int num1, num2, num3, small, big;
	cout<<"Enter three numbers"<<endl;
	cin>>num1>>num2>>num3;
	small=num1;
	big=num1;
	if(small>num2){
		small=num2;
	}
	if(small>num3){
		small=num3;
	}
	if(big<num2){
		big=num2;
	}
	if(big<num3){
		big=num3;
	}
	cout<<"The smallest number is: "<<small<<endl;
	cout<<"The largest number is: "<<big<<endl;	

	return(0);

}
