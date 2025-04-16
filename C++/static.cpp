#include<iostream>
using namespace std;
class Maths{
	public:
		static int objCount;
		Maths(){
			Maths::objCount++;
		}
		static void print(){
			cout<<Maths::objCount;
		}
};
int Maths::objCount=0;

main(){
	Maths m1,m2,m3;
	Maths::print();
	
}
