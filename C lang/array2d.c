#include<stdio.h>
main(){
	int a[2][2],b[2][2],c[2][2];
	int i,j;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Second array");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t enter b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		   c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t c[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
}
