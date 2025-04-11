#include<iostream>
using namespace std;
class Category{
	public:
		int cid;
		char cname[20];
		void getCategory(){
			cout<<"\n enter catid and Category";
			cin>>cid>>cname;
		}
};
class Product : protected Category{
	 public:
	 	int pid;
	 	char pname[20];
	 	float price;
	 	
	 	void getProduct(){
	 		getCategory();
	 		cout<<"\n Enter pid pname price";
	 		cin>>pid>>pname>>price;
		 }
		 void showProduct(){
		 	cout<<"\n Catid="<<cid<<"\t category="<<cname;
		 	cout<<"\n pid="<<pid<<"\tpname="<<pname<<"\tprice="<<price;
		 }
};
main(){
	Product p1;
	p1.getProduct();
	
	p1.showProduct();
}
