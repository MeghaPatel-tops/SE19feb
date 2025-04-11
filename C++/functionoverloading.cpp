#include<iostream>
using namespace std;
class Maths{
	public:
		void add(double m,double n){
			cout<<"\n addition of two float="<<m+n;
		}
		void add(int a, int b){
			cout<<"\n addition of two int="<<a+b;
		}
		void add(float x,float y,float z){
			cout<<"\n addition of three float="<<x+y+z;
		}
};
main(){
	Maths m1;
	m1.add(2.2,3.3);
	m1.add(1.2,3.4,5.6);
	m1.add(120,56);
}
