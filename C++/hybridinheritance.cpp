#include<iostream>
using namespace std;
class A{
	public:
		int a;
		getA(){
			cout<<"\n enter a";
			cin>>a;
		}
};
class B:virtual public A{
	public:
		int b;
		getB(){
			cout<<"\n enter b";
			cin>>b;
		}
};
class C:virtual public A{
	public:
		int c;
		getC(){
			cout<<"\n enter c";
			cin>>c;
		}
};
class D:public B,public C{
	public:
		int d;
		getD(){
			cout<<"\n enter d";
			cin>>d;
		} 
		void add(){
			cout<<"\n addition="<<b+c+d+a;
		}
};
main(){
	D d1;
	d1.getA();
	d1.getB();
	d1.getC();
	d1.getD();
	d1.add();
}
