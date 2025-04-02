#include<iostream>
using namespace std;
class Calc{
	public:
		int a,b;
		void getData(){
			cout<<"\n Enter a and b";
			cin>>a>>b;
		}
		void calculate(){
			cout<<"\n addition="<<a+b;
			cout<<"\n sub="<<a-b;
			cout<<"\n mul="<<a*b;
			cout<<"\n div="<<(float)a/b;
		}
};
main(){
	Calc c1;
	c1.getData();
	c1.calculate();
}
