#include<stdio.h>
int i=1;//Global Variables
void add(int x,int y){//Formal Parameter
	int add;//Local Variables
	add=x+y;
	printf("\n addition=%d",add);
	printf("\n i=%d",i);
}
main(){
	int a=10;//Local Variables
	{
		int x=19;//Local Variables
		
	}
	printf("\n i=%d",i);
	printf("\n a=%d",a);
	add(12,34);
}
