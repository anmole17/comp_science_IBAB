/*
Write a program in which you use operator overloading w.r.t "++" operator to work with an object of a class.
Pre increment operation should search for vowels in a string and post increment operation should match two strings and print
equal or not.
*/
#include<iostream>

using namespace std;

class cls{
private:
string str1, str2;

public:
void operator ++(){
	int i, cntr=0;
	cout<<"Pre increment operator:"<<endl;
	cout<<"Enter a string "<<endl;
	getline(cin,str1);
	cout<<"Vowels present:"<<endl;
	for(i=0; i<str1.length(); i++){
		if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o'|| str1[i]=='u'||str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O'|| str1[i]=='U'){
			cout<< str1[i]<<" "<<endl;
			cntr++;
	}
	}
	if(cntr==0){
		cout<<"No vowels found"<<endl;
	}	
	
	}

void operator ++(int){
	int i, cntr=0;
	cout<<"Post increment operator:"<<endl;
	cout<<"Enter a string "<<endl;
	getline(cin,str1);
	
	cout<<"Enter another string "<<endl;
	getline(cin,str2);
	
	if(str1.compare(str2)==0){
	cout<<"The strings are equal"<<endl;
	}
	else{
	cout<<"The strings are not equal"<<endl;
	}
}


};

int main(){

cls cl;
++cl;
cl++;

return 0;


}
