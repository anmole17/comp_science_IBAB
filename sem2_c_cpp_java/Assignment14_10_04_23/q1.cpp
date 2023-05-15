/*
1. Write a program in CPP, to calculate square root and cube root of a number. Use the library methods
sqrt(number), cbrt(number) which will return the square root and cube root respectively. Include cmath
header before using libraries. 
*/
#include<iostream>
#include<cmath>

using namespace std;
int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;

cout<<"Square root of "<<n<<" is "<<sqrt(n)<<endl;
cout<<"Cube root of "<<n<<" is "<<cbrt(n)<<endl;

return(0);

}
