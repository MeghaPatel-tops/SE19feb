//function call itself
#include<stdio.h>
int fact(int num){//5*fact(4) 5*4*fact(3)  5*4*3*fact(2) 5*4*3*2*fact(1)
	int f;
	if(num==1){
		return 1;
	}
	f= num*fact(num-1);
	return f;
}
main(){
	printf("\n fact =%d",fact(5));
}
