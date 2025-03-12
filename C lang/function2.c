#include<stdio.h>
//with return with parameter
float areaCircle(int r){
	float area;
	area = 3.14*r*r;
	return area;
}
//with return without parameter
int square(){
	int num;
	printf("\n Enter num:");
	scanf("%d",&num);
	return num*num;
}
//without return with parameter
void add(int a,int b){
	int c=a+b;
	printf("\n addition of %d and %d=%d",a,b,c);
}
//without return without parameter
void display(){//Function Definition
	printf("\n Welcome to app");
}

main(){
	printf("\n area of circle=%f",areaCircle(3));
	printf("\n sq=%d",square());
	add(12,34);
	display();
	
}
