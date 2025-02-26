#include<stdio.h>
main(){
	int a;
	printf("\n Enter a:");
	scanf("%d",&a);
	printf("\n sizeof =%d",sizeof(double));
	(a%2 == 0)?printf("\n Even"):printf("\n Odd");
	(a > 0)? printf("\n Postive"):printf("\n Negative");
}
