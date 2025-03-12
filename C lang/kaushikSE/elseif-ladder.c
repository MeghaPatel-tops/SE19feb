#include<stdio.h>
/*
	if(cond1){
	}
	else if(cond2){
	}
	else if(cond3){
	}
	else{}
*/	
main(){
	int x1,x2;
	printf("\n enter x1 and x2");
	scanf("%d %d",&x1,&x2);
	if(x1 > 0 && x2 > 0){
		printf("\n first");
	}
	else if(x1<0 && x2 >0){
		printf("\n sec");
	}
	else if(x1 < 0 && x2 < 0){
		printf("\n third");
	}
	else if(x1 > 0 && x2 <0){
		printf("\n forth");
	}
	else{
		printf("\n center");
	}
}
