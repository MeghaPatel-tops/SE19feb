#include<stdio.h>
int revNumber(int num){
	static int rev=0;
	if(num == 0){
		return;
	}
	rev = rev*10+(num%10);
	printf("\n rev=%d",rev);
	revNumber(num/10);
	return rev;
}
main(){
	printf("\n rev=%d",revNumber(123489));
}
