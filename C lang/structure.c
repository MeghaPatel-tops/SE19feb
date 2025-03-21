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
	struct Student s1;
	printf("\n Enter rollno name sub1 sub2 marks");
	scanf("%d %s",&s1.rollno,s1.name);
	scanf("%f %f",&s1.sub1,&s1.sub2);
	
	printf("\n Name=%s and Enroll=%d",s1.name,s1.rollno);
	printf("\n sub1=%f sub2=%f",s1.sub1,s1.sub2);
}
