// 1. Write a program in CPP that contains 4 unrelated classes.
// Lets call them as A,B,C and D.
// D will have a method named "srch" standing for "search". When you run it, it asks the user, to enter any
// integer number. Now, it searches if this number is part of D and also if its part of A,B,C. If the number is
// found as part of A / B /C /D, it will print that the number is present and also the Class in which its present.
// It can be present in only one Class or in All classes. It may not be present also in any class, in which case
// the method will print "Not Found". 
#include<iostream>

using namespace std;

void find(int x); 
void init_val();
class A{
    int i = 56;
    public:
    friend void init_val();
    friend void find(int x);
};

class B{
    int i = 21;
    public:
    friend void init_val();
    friend void find(int x);
};

class C{
    int i = 12;
    public:
    friend void init_val();
    friend void find(int x);
};

class D{
    int i = 0;
    
    public:
    void srch(){
        class A a; 
        class B b; 
        class C c; 
        int j=1;
        while(j==1){        
        int x;
        cout<<"Enter an integer value to search:"<<endl;
        cin>>x;
        find(x);
        cout<<"Press 1 to search again"<<endl;
        cin>>j;
        }
    }
    friend void find(int x);
};

void find(int x){
    static class A a; 
    static class B b; 
    static class C c; 
    static class D d;
        if(a.i==x || b.i==x || c.i==x || d.i==x){
            
            if(a.i==x){
                cout<<a.i<<" is part of class A"<<endl;
            }
            if(b.i==x){
                cout<<b.i<<" is part of class B"<<endl;
            }
            if(c.i==x){
                cout<<c.i<<" is part of class C"<<endl;
            }
            if(d.i==x){
                cout<<d.i<<" is part of class D"<<endl;
            }
        }
        else{
            cout<<"Not Found"<<endl;
        }
    cout<<"Do you want try to initialize the integer values first? Press 1"<<endl;
    int j;
    cin>>j;
    if(j==1){
    cout<<"Initialize integer value for class A"<<endl;
    cin>>a.i;
     
    cout<<"Initialize integer value for class B"<<endl;
    cin>>b.i;
     
    cout<<"Initialize integer value for class C"<<endl;
    cin>>c.i;
     
    cout<<"Initialize integer value for class D"<<endl;
    cin>>d.i;
    }
}
int main(){
    D d;
    d.srch();
}
