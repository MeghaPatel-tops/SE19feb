#include<iostream>
using namespace std;
class Parent{
	public:
		void display(){
			cout<<"\n parent class method";
		}
};
class Child:public Parent{
	public:
		void display(){
			cout<<"\n child class method";
		}
};
main(){
	Child c1;
	c1.display();
}
