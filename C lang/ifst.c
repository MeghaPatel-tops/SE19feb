#include<stdio.h>
/*
if(condition){
	//block
}
*/
main(){
	int num;
	printf("\n Enter num");
	scanf("%d",&num);
	if(num > 0){
		printf("\n square of %d = %d",num,num*num);
	}
}
