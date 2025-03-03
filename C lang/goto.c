#include<stdio.h>
main(){
	int num;
	printf("\n Enter num");
	scanf("%d",&num);
	if(num%2==0){
		goto Even;
	}
	else{
		goto Odd;
	}

     
    Even:{
		printf("\n Num is even");
		return;
	}
	Odd:{
		printf("\n num is odd");
		return;
	}
}
