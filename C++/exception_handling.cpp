#include<iostream>
using namespace std;
main(){
	int a=10,b=0;
	float c;
	try{
		if(b==0){
			throw b;
		}
		else{
			c=a/b;
		cout<<"\n c= "<<c;
		}
		
	}
	catch(int e){
		cout<<"\n divide by 0 error b="<<e;
	}
}
