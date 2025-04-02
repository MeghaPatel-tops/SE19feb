#include<stdio.h>
main(){
	int id;
	char name[20];
	FILE *fp;
	fp = fopen("user.text","w");
	fprintf(fp,"%d %s",101,"malay");
	fclose(fp);
	
	fp= fopen("user.text","r");
	fscanf(fp,"%d %s",&id,name);
	printf("\n id=%d name=%s",id,name);
	fclose(fp);
}
