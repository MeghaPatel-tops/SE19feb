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
		 
		 friend void accessData(Maths);
		 	
};
void accessData(Maths m1){
	cout<<"\n private data="<<m1.privateData;
	cout<<"\n procted data ="<<m1.proctedData;
}
main(){
	Maths m1;
	accessData(m1);
}
