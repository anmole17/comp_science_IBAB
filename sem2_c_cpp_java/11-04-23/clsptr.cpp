#include<iostream>

using namespace std;
class A{
	public:
	void f1(){
	cout<<"From A"<<endl;
	}
};


class B:public A{
	public:
	void f1(){
	cout<<"From B"<<endl;
	}
};


class C:public B{
	public:
	void f1(){
	cout<<"From C"<<endl;
	}
};

int main(){
 class A *ptr, a;
 ptr=&a;
 ptr->f1();

}
