#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"\n parent class constructor called";
		}
		Parent(int x){
			cout<<"\n x="<<x;
		}
};
class Child:public Parent{
	public:
		Child(){
			cout<<"\n child class constructor called";
		}
		Child(int m , int n,int x):Parent(x){
			cout<<"\n m="<<m<<"\t n="<<n;
		}
};
main(){
	Child c1;
	Child c2(12,34,56);
}
