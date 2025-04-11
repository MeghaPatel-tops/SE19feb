#include<iostream>
using namespace std;
class Maths{
	public:
		int l,b,r;
		float pi;//16
		Maths(){}
		
		Maths(int b){
			l=b;
			cout<<"\n area of square="<<l*l;
		}
		Maths(int x,int y ,int z,float p){
			l=x;
			b=y;
			r=z;
			pi=p;
			cout<<"\nl="<<l<<"\tb="<<b<<"\tr="<<r<<"\tpi="<<pi;
		}
};
main(){
	Maths* m1 = new Maths(7); 
	Maths* m3 = new Maths();
	cout<<"\nm3="<<sizeof(m3);
	Maths m2(1,2,3,4);
	cout<<"\n size of m1="<<sizeof(m1);
	cout<<"\n size of m2="<<sizeof(m2);
}
