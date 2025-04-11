#include<iostream>
using namespace std;
class Cart{
	public:
		int cartid,pid,userid;
		char username[20];
		float total;
		void getCartdata(){
			cout<<"\n enter cartid pid userid";
			cin>>cartid>>pid>>userid;
			cout<<"\n username and total";
			cin>>username>>total;	
		}
};
class Order:public Cart{
	public:
		int oid;
		void orderAdd(){
			cout<<"\n Enter oid";
			cin>>oid;
		}
};
class Payment:public Order{
	public:
		int paymentid;
		char mode[10];
		char status[10];
		void checkPayment(){
			cout<<"\n enter paymentid mode status";
			cin>>paymentid>>mode>>status;
			
		}
		void PrintBill(){
			cout<<"\n Username="<<username;
			cout<<"\n total="<<total;
			cout<<"\n orderid="<<oid;
			cout<<"\n paymnetid="<<paymentid;
			cout<<"status="<<status;
		}
};

main(){
	Payment p1;
	p1.getCartdata();
	p1.orderAdd();
	p1.checkPayment();
	p1.PrintBill();
}

