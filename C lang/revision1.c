#include<stdio.h>
main(){
	int i,j,m;
	for(i=1;i<=5;i++){
		m=97;
		for(j=1;j<=i;j++){
			printf(" %c",m);
			m++;
		}
		printf("\n\n");
	}	
}
