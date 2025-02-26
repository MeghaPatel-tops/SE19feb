#include<stdio.h>
/*
switch(choice){
    case 1:
    	//block
    break
	case 2:
		//block
	break
	default:
		//block
	break;			
}*/
main(){
	  int choice,r,l,b;
	  printf("\n press 1 for area of circle:");
	  printf("\n press 2 for area of square:");
	  printf("\n press 3 for area of rectangle:");
	  printf("\n enter choice:");
	  scanf("%d",&choice);
	  
	  switch(choice){
	  	 case 1:
	  	 	printf("\n area of circle");
	  	 	printf("\n Enter radius");
	  	 	scanf("%d",&r);
	  	 	printf("\n area =%f",(3.14*r*r));
	  	 break;
		  case 2:
		  	printf("\n area of square");
			  printf("\n Enter l");
			  scanf("%d",&l);
			  printf("\n area=%d",l*l);
			break; 
		  case 3:
		  	printf("\n area of rectangle");
			  printf("\n Enter l and b");
			  scanf("%d %d",&l,&b);
			  printf("\n area=%d",l*b);
			break; 	 
			default:
				printf("\n Wrong choice");
			break;	
	  }
	  
}
