#include<stdio.h>
/*
 a,b,c =max 
	if(condition)
		if(condition){
			//block
		}
	}
*/
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n enter maths phy chem marks");
	scanf("%d %d %d",&maths,&phy,&chem);
	if(maths >=65 && phy >=55 && chem>=50){//66+56+51=183//132
		total = maths+phy+chem;
		subtotal = maths+phy;
		if(total >= 190 || subtotal >=140){
			printf("\n eligible for admission");
		}
		else{
			printf("\n inner Not  eligible for admission");
		}
		
	}
	else{
		printf("\n Not eligible for admission");
	}
}
