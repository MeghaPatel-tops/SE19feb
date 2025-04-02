#include<stdio.h>
main(){
	FILE *fp;
	fp = fopen("product.text","a");
	if(fp == NULL){
		printf("\n error");
	}
	else{
		fprintf(fp,"\nproductid=%d productname=%s price=%f",109,"laptop",12300.20);
		fclose(fp);
	}	

