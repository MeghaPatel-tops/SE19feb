#include<stdio.h>
/*
	switch(choice){
	  case 1:
	  		//block
	  		break;
	  case 2:
	  		//block
			 break;
		default:
			break	  		
	}
*/
main(){
	int a,b ;
	char choice;
	printf("\n enter + for addition");
	printf("\n enter - for sub");
	printf("\n enter * for mul");
	printf("\n enter / for div");
	printf("\n Enter your choice");
	scanf("%c",&choice);
	
	printf("\n Enter a and b");
	scanf("%d %d",&a,&b);
	
	switch(choice){
		case '+':
			printf("\n add of %d and %d = %d",a,b,a+b);
		break;	
		case '-':
			printf("\n sub of %d and %d = %d",a,b,a-b);
		break;
		case '*':
			printf("\n mul of %d and %d = %d",a,b,a*b);
		break;	
		case '/':
			printf("\n div of %d and %d = %f",a,b,(float)a/b);
		break;
		default:
			printf("\n Wrong choice");
		break;			
	}
}	
