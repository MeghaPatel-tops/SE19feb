#include<stdio.h>
/*
returtype  functionName(p-1,p-2){
		//block code
}
*/
void add(int a,int b);
float areaCircle(int r);
void display();//Function Declaration

main(){
	display();
	add(12,56);
	add(90,887);
	float ans=areaCircle(4);
	printf("\n area of circle=%f",ans);
	printf("\n area of circle2=%f",areaCircle(5));
}
void display(){//Function Definition
	printf("\n Welcome to app");
}
void add(int a,int b){
	int c=a+b;
	printf("\n addition of %d and %d=%d",a,b,c);
}
float areaCircle(int r){
	float area;
	area = 3.14*r*r;
	return area;
}
