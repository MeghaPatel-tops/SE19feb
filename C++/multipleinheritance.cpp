#include<iostream>
using namespace std;
class B{
	public:
		int b;
		getB(){
			cout<<"\n enter b";
			cin>>b;
		}
};
class C{
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
			cout<<"\n addition="<<b+c+d;
		}
};
main(){
	D d1;
	d1.getB();
	d1.getC();
	d1.getD();
	d1.add();
}
