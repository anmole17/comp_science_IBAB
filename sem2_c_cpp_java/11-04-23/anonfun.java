import java.util.*;

abstract class A{

	abstract void f1();

};

class B{

	public static void main(String args[]){
		A a1 =new A(){
		void f1(){
		System.out.println("Anon class");
		}
		};
		a1.f1();
	}
};
