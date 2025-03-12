#include<stdio.h>
main(){
	int i,sum=0;//
	for(i=1;i<=10;i++){
		if(i%2==0){
			continue;//break
		}
		printf("\t %d + ",i);
		sum=sum+i;
	}
	printf("= %d",sum);
}
