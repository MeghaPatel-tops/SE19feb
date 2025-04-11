#include<iostream>
#include<string.h>
using namespace std;
class User{
	 char email[30];
	 char username[20];
	 public:
	 	User(char name[20],char email[30]){
	 		strcpy(username,name);
	 		strcpy(this->email,email);
	 		
		}
		void save(){
			cout<<"Email="<<email;
			FILE* f1;
			f1=fopen("Users.csv","a");
			fprintf(f1,"\n%s,%s",username,email);
			fclose(f1);
		}
};
main(){
	User user1("megha","m@gmail.com");
	User user2("malay","malay@gmail.com");
	user1.save();
	user2.save();
}
