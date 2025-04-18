#include<iostream>
#include<string.h>
using namespace std;
class User{
	public:
		char uname[30];
		char email[30];
		User(char uname[30],char email[30]){
			strcpy(this->uname,uname);
			strcpy(this->email,email);
		}
		void UserData(){
			cout<<"\n username="<<uname;
			cout<<"\n email="<<email;
		}
};

main(){
	User u1("malay","malay@gmail.com");
	u1.UserData();
}
