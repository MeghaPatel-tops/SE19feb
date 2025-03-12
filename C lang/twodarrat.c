#include<stdio.h>
main(){
	int a[2][2]={12,34,45,67};
	int i,j;
	/*   j=0  j=1
	i=0  00   01  12   34
	i=1  10   11  45   67
	*/
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
