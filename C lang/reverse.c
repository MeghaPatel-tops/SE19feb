#include<stdio.h>
main(){
	int num,rev=0,rem;
	printf("\n enter num");
	scanf("%d",&num);
	while(num != 0){
		rem = num%10;
		printf("\n rem=%d",rem);
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n rev=%d",rev);
}
