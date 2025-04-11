#include<iostream>
using namespace std;
class Account{
	public:
		int acc_no,amt;
		char holder[20];
		char email[20];
		float balance;
		
		void getAccDetails(){
			cout<<"\n enter acc_no holder name and email";
			cin>>acc_no>>holder>>email;
			cout<<"\n enter balance";
			cin>>balance;
		}
		void credit(){
			cout<<"\n Enter credit ammount";
			cin>>amt;
			balance+=amt;
		}
		void debit(){
			cout<<"\n Enter debit ammount";
			cin>>amt;
			balance-=amt;
		}
		void CheckBalance(){
			cout<<"\n balance="<<balance;
		}
};
class Saving:public Account{
	  public:
	  	void calBalance(){
	  		 float finalAmt = balance - (balance*0.05);
	  		 cout<<"\n balance = "<<finalAmt;
		  }
};
class Current:public Account{
	  public:
	  	void calBalance(){
	  		 float finalAmt = balance - ((balance*1.5)/100);
	  		 cout<<"\n balance = "<<finalAmt;
		  }
};

main(){
	Saving s1;
	Current c1;
	s1.getAccDetails();
	s1.credit();	
	s1.CheckBalance();
	s1.calBalance();
	c1.getAccDetails();
	c1.debit();	
	c1.CheckBalance();
	c1.calBalance();
	

}
