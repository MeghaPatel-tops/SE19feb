#include<iostream>
using namespace std;
class Parent{
	public:
		virtual void area()=0;//pure virtual function
};
class Circle:public Parent{
	public:
		void area(){
			int r;
			cout<<"\n Enter r";
			cin>>r;
			float a= 3.14*r*r;
			cout<<"\n area of circle="<<a;
		}
};
class Square:public Parent{
	public:
		void area(){
			int l;
			cout<<"\n Enter l";
			cin>>l;
			cout<<"\n area of circle="<<l*l;
		}
};
main(){
	Circle c1;
	c1.area();
	Square s1;
	s1.area();
}
