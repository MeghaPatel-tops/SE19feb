#include<stdio.h>
/*
if(condition){
	if(condition){
		//block
	}
}
else{
	//block
}
*/
main(){
	int Maths,Phy,chem,total,subtotal;
	printf("\n Enter marks of Maths Phy Chem");
	scanf("%d %d %d",&Maths,&Phy,&chem);
	
	if(Maths >= 65 && Phy >=55 && chem >=50){//90 90 89
		total = Maths +Phy+chem;
		subtotal = Maths+Phy;
		if(total >= 190 || subtotal >=140){
			printf("\n Eligible for admision");
		}
		else{
			printf("\n inner Not Eligible for admision");
		}
	}
	else
	{
			printf("\n outer Not Eligible for admision");
		}
	
}
