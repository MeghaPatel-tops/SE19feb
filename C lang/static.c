#include<stdio.h>
void incre(){
	int a=0;
	static int s=0;
	a++;
	s++;
	printf("\n a=%d \t s=%d",a,s);
}
main(){
	int i;
	for(i=1;i<=3;i++){
		incre();
	}
}
