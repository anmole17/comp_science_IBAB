/*
 Write a CPP program that calculates mean, median, mode and range of 'n' numbers. The entire program should consist at least one abstract class and two derived classes.
 */
#include<iostream>

using namespace std;

class STAT1{ // abstract class with pure virtual function

	public:
		virtual float *ascending(float num[], int n)=0;
};
// derived class to sort the values
class SORT:public STAT1
{

	public:
		float *ascending(float arr[], int n){
			int i,j;
			float c;
			for(j=0; j<n; j++)
			{
                for(i=j+1; i<n; i++)
                {
                    if(arr[j]>arr[i])
                    {
                        c=arr[j];
                        arr[j]=arr[i];
                        arr[i]=c;
                    }
                }
			}
			// for(i=0;i<n;i++){
			// 		cout<<arr[i]<<" ";
			// 	}
			return arr;
		}
};
// derived class with statistic functions
class STAT2: public SORT{
	public:
		
		float mean(float num[], int n){
			float sum=0; int i; float mean;
			for(i=0; i<n; i++){
				sum=sum+num[i];
			}
			mean=sum/n;
			cout<< "Mean of the numbers is: "<< mean<<endl;
			return mean;
		}

		float median( float num[], int n){
			float median; float *asc;
			asc=ascending(num, n);
			
			if(n%2==0){// for even numbers
				median=( asc[(n-1)/2] + asc[n/2])/2;
			}
			else{
				median=asc[(n/2)];
			}
			cout<<"The median is: "<<median<<endl;
			return median;
			
			
		}
		int mode( float num[], int n){
			float mode=0, *asc; int count[n+5];
			int ct=1,i, md=0;
			asc=ascending(num,n);
			count[0]=ct;
			for(i=1;i<n;i++){
					if(asc[i-1]==asc[i]){
						ct++;
						count[i]=ct;
					}
					else{
						ct=1;
						count[i]=ct;
					}
			}
			for(i=0;i<n;i++){
				if(md<count[i]){
					md=i;
				}
			}
			cout<<"The mode of the numbers is: "<<asc[md]<<endl;

			return 0;
		}
		
};

int main(){
	int n,i;
	cout<<"Enter the number of numbers to input:"<<endl;
	cin>>n;
	float num[n+5], *asc;
	cout<<"Enter the numbers: "<<endl;
	for( i=0;i<n;i++){
		cin>>num[i];
	}
	class STAT2 stat;
	class SORT sort;
	asc=sort.ascending(num, n);
	cout<<"Sorted numbers: ";
	for( i=0;i<n;i++){
		cout<<asc[i]<<" ";
	}
	cout<<"\nThe range of the numbers is:"<< asc[n-1]-asc[0]<<endl;
	stat.mean(num,n);
	stat.median(num,n);
	stat.mode(num,n);
	
	return 0;
}