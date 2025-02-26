#include<stdio.h>
/*
if(condi1){
}
else if(condi2){
}
else if(condi3){
}
else{}
*/
main(){
	int x1,x2;
	printf("\n Enter x1,x2");
	scanf("%d %d",&x1,&x2);
	if(x1 > 0 && x2 >0){
		printf("\n first");
	}
	else if(x1 <0 && x2 >0){
		printf("\n Sec");
	}
	else if(x1 <0 && x2<0){
		printf("\n third");
	}
	else if(x1 > 0 && x2<0){
		printf("\n forth");
	}
	else{
		printf("\n center");
	}
}
