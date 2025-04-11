#include<iostream>
using namespace std;
class Maths{
	public:
		int a,b;
		// Default contructor 
		Maths(){
			cout<<"\n Default contructor called";
		}
		~Maths(){
			cout<<"\n desstructor method called";
		}
		//Parameterized constructor
		Maths(int x,int y){
			a=x;
			b=y;
		}
		//Copy constructor
		Maths(const Maths& m2){
			a=m2.a;
			b=m2.b;
		}
		
		void display(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	Maths m1,m2(12,3);
	m2.display();
    Maths m3=m2;
    m3.display();
	//cout<<"\n size of obj="<<sizeof(m1);
}
