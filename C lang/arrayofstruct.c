#include<stdio.h>
/* 
struct name{
	//member1,member2;
};
*/
struct Student{
	int rollno; 
	char name[20];
	float sub1,sub2;
};
main(){
	struct Student s[3];//array of structure
    int i;
    for(i=0;i<3;i++){
    printf("\n Enter %d student's' rollno name sub1 sub2 marks ",i+1);
	scanf("%d %s",&s[i].rollno,s[i].name);
	scanf("%f %f",&s[i].sub1,&s[i].sub2);
	}
	for(i=0;i<3;i++){
		printf("\n %d Name=%s and Enroll=%d",i+1,s[i].name,s[i].rollno);
	printf("\t sub1=%f sub2=%f",s[i].sub1,s[i].sub2);
	}
} 
