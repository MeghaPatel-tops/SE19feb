#include<stdio.h>
/*
if(condition){
	//block
}
else{
	//block
}
*/
main(){
	int num;
	printf("\n Enter num");
	scanf("%d",&num);
	if(num%2==0){
		printf("\n %d = Even",num);
	}
	else{
		printf("\n %d = Odd",num);
	}
}
