/*
Write a program in which you overload operator "--" in such a way that pre decrement will find the repeated numbers in an array
of numbers and post decrement will find all the prime numbers in a list of 'n' numbers.
*/

#include<iostream>

using namespace std;

class cls{
private:
int arr[15];

public:
void operator --(){
	int i,j, cntr=0;
	cout<<"Pre decrement operator:"<<endl;
	cout<<"Enter an array of 10 integers"<<endl;
	for(i=0;i<10;i++){
	cin>>arr[i];
	}
	cout<<"Repeated numbers:"<<endl;
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(arr[i]==arr[j]){
			cout<<arr[i]<<endl;
			cntr++;
			}
		}
	}
	if(cntr==0){
		cout<<"All numbers are unique"<<endl;
	}	
	
	}

void operator --(int){
	int i,j, cntr;
	cout<<"Post decrement operator:"<<endl;
	// cout<<"Enter an array of 10 integers"<<endl;
	// for(i=0;i<10;i++){
	// cin>>arr[i];
	// }
	cout<<"The prime numbers in the list are:"<<endl;
	for(i=0;i<10;i++){
		cntr=0;
		if(arr[i]==2||arr[i]==3){
			cout<<arr[i]<<endl;
			continue;
		}
		if(arr[i]%2==0 || arr[i]==1){
		cntr++;
		}
		for(j=3;j<(arr[i]/2);j+=2){
			if(arr[i]%j==0){
				cntr++;
				}
		}
		
		if(cntr==0){
		cout<<arr[i]<<endl;
		}
	}
}


};

int main(){

cls cl;
--cl;
cl--;

return 0;


}
