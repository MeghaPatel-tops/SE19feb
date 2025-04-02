#include<stdio.h>
main(){
	char ch;
	char str[20];
	FILE *fp;
	fp = fopen("test.text","w");
	//fputc('a',fp);//single char write into file
	fputs("hello wolrd",fp);
	fclose(fp);
	
	fp= fopen("test.text","r");
	//ch = fgetc(fp);//single char read from file
	fgets(str,20,fp);
	printf("\n str=%s",str);
	fclose(fp);
}
