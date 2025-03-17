#include<stdio.h>
main(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	if(num%2==0){
		goto even;
	}
	else{
		goto odd;
	}
   even:{
   	printf("\n even number");
   	return;
   }

   odd:{
   	printf("\n odd number");
   	return;
   }
   	

}
