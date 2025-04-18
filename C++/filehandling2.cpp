#include<iostream>
#include<fstream>
using namespace std;
main(){
	char ch;
	int choice;
	for(;;){
		cout<<"\n press 1 for data add";
		cout<<"\n press 2 for break";
		cout<<"\n enter choice";
		cin>>choice;
		if(choice == 1){
				char uname[30],email[30];
				int phonno;
				cout<<"\n Enter uname email phonno";
				cin>>uname>>email>>phonno;
				fstream file1;//fstream
				file1.open("users.csv",ios::app);//sec parameter ios::in
				file1<<uname<<","<<email<<","<<phonno<<"\n";
				file1.close();
		}
		else if(choice==2){
			break;
		}
		else{
			cout<<"\n Wrong choice";
		}
	}

	
	ifstream file2;
	file2.open("users.csv");
	//file2>>data;
	while(!file2.eof()){
		file2.get(ch);
		if(ch == ','){
			cout<<"\t";
			continue;
		}
		cout<<ch;
	}
	file2.close();
}
