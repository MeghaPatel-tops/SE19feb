#include<stdio.h>
main(){
	char str[10],str2[10];//
	int i=0,k=0;
	printf("\n enter string:");
	scanf("%s",str);
	printf("\n str=%s",str);
	while(str[i]!='\0'){//tops == spot
		i++;
	}//i=4
	
	printf("\n len of string=%d",i);
	i--;
	while(i>=0){
		str2[k]=str[i];
		//printf("\n str[%d]=%c   str2[%d]=%c",i,str[i],k,str2[k]);
		k++;
		i--;
	}
	
	printf("\n str=%s rev=%s",str,str2);
	
	
	
}
