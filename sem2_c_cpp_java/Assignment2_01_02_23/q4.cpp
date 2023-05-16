/*Improvise (3) and print the values using another function inside the same class.
This means constructor initialises values and another function prints the values.*/

#include<iostream>

using namespace std;

class CLS{
	int i,j;
	float k;
	
	public:
	
	CLS()
	{
		i=10;
		j=20;
		k=30.43;
		

	}
	
	void print(){
		cout<<"The initiated data is: "<<i<<" "<<j<<" "<<k<<endl;
	
	}


};

int main(){

	class CLS c1;
	c1.print();
	return(0);
	
}
