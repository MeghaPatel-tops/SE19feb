#include<stdio.h>

main(){
	int enroll;
	char name[20];
	char email[20];
	int i;
	FILE *fp;
	char ch;
	fp = fopen("student.csv","a");
	//fprintf(fp,"Enrollnumber,Name,Email\n");
	for(i=0;i<3;i++){
		printf("\n Enter enroll name email");
		scanf("%d %s %s",&enroll,name,email);
		fprintf(fp,"%d,%s,%s\n",enroll,name,email);
	}
	fclose(fp);
	
	fp= fopen("student.csv","r");
	while((ch=fgetc(fp))!=EOF){
		if(ch == ','){
			printf("\t");
			continue;
		}
		printf("%c",ch);
	}
	
	
	
}
