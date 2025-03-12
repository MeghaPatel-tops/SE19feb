#include<stdio.h>
main(){
	int a=10;
	int *ptr;//decalre 
	ptr = &a;
	printf("\n address=%p and value =%d",ptr,*ptr);
	*ptr=30;
	printf("\n a=%d",a);
}
