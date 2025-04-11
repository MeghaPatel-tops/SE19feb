#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void display(){
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
	Parent* p1;
	p1=&c1;
	p1->display();
	c1.display();
}
