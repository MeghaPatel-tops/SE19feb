#include<stdio.h>
#include<string.h>
main(){
	char str[10],str2[10];//
	int i=0,k=0;
	printf("\n enter string:");
	scanf("%s",str);
	printf("\n str=%s",str);
	i=strlen(str);
	printf("\n len =%d",i);
	strrev(str);
	strcpy(str2,str);
	printf("\n str rev=%s",str);
	printf("\n strcpy str2=%s",str2);
	strupr(str);
	printf("\n str upper case=%s",str);	
	printf("\n strcmp=%d",strcmp(str2,str));
	
}
