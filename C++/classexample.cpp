#include<iostream>
using namespace std;
class Product{
	
	private:
	//data member
	int pid,price;//8+60=68+10=78
	char pname[30];
	char desc[30];
	
	public:
	//member function
	void getProduct(){
		cout<<"\n Enter product pid pname price desc";
		cin>>pid>>pname>>price>>desc;
	}
	void showProduct(){
		cout<<"\n pid="<<pid<<"\tpname="<<pname;
		cout<<"\n price="<<price<<"\n descr="<<desc;
	}
};
main(){
	Product p1,p2;
	p1.getProduct();
	p1.showProduct();
	p2.getProduct();
	p2.showProduct();
	//cout<<"\n in main pid"<<p1.pid;
}
