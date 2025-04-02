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
	Product p[3];
	int i;
	for(i=0;i<3;i++){
		cout<<"\n enter "<<i+1<<" object details";
		p[i].getProduct();
	}
	for(i=0;i<3;i++){
		cout<<"\n show "<<i+1<<" object details";
		p[i].showProduct();
	}
}
