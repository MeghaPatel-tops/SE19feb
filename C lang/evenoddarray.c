#include<stdio.h>
main(){
	int a[10],i,even=0,odd=0;
	for(i=0;i<10;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	for(i=0;i<10;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	
	printf("\n odd =%d and even=%d",odd,even);
	
}
