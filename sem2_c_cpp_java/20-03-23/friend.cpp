/*creating a friend function*/

#include<iostream>

using namespace std;

class A1{

private: 
	int i;
	friend void f2();
public:

	void f1(){
		i=10;
		cout<<i<<"f1()"<<endl;
	}

	

};

class B1:public A1{

private:
	int j;

public:
	void f3(){
	//i=10;
	//cout<<i<<"f3()"<<endl;
	j=20; 
	cout<<j<<"f3()"<<endl;
	}	
	
	//friend void f2();
};

void f2(){

	class A1 a1;
	a1.f1();
	a1.i=20;
	cout<<a1.i<<"f2()"<<endl;
	
	class B1 b1;
	b1.i=12;
	cout<<b1.i<<"f2()"<<endl;
	//b1.f3();
	//b1.j=30;
	//cout<<b1.j<<"f2()"<<endl;
	
}

int main(){
	
	f2();
	return 0;
}







