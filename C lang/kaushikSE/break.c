#include<stdio.h>
main(){
	int i,num,sum=0;
	
	for(i=1;i<=5;i++){
		sum=sum+i;
		if(i==5){
			printf(" %d ",i);
		}
		else{
			printf(" %d +",i);
		}
			
	}
	printf(" =%d",sum);
}
