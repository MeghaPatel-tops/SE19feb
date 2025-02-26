#include<stdio.h>
main(){
	int a=10,b,c=90,d,sum;
	b=a++;//post increment
	//first assign a to b then increment by itself
	d=++c;
	//first increment and then assign to other vari..
	printf("\n b=%d a=%d",b,a);
	printf("\n c=%d d=%d",c,d);
	sum =a+b;
	printf("\n addition of %d and %d =%d",a,b,sum);
}
