#include<stdio.h>
//call by ref
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

main(){
	int a=10,b=30;
	swap(&a,&b);
	printf("\n a=%d and b=%d",a,b);
}
