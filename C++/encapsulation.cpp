#include<iostream>
using namespace std;
class Maths{
	 private:
	 	int privateData;
	 protected:
	 	int proctedData;	
	 public:
	 	int publicData;
	 	Maths(){
	 		privateData=12;
	 		proctedData=13;
	 		publicData=14;
		 }
		 void display(){
		 	cout<<"\n public="<<publicData;
			cout<<"\n private="<<privateData;
			cout<<"\n procted="<<proctedData;
		 }
	 	
};
class child:public Maths{
	public:
		void ChildPrint(){
			cout<<"\n child class public="<<publicData;
			//cout<<"\n private="<<privateData;
			cout<<"\n child class procted="<<proctedData;
		}
};
main(){
	child m1;
	cout<<"public="<<m1.publicData;
	m1.display();
	m1.ChildPrint();
}
