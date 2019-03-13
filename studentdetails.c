#include<stdio.h>
struct  student
{
	int rno;
	char name[100];
	char dept[100];
	int marks;
	char grade[100];
};
int details(struct student a[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i].rno=i+1;
		printf("Enter the name of roll no %d\n",i+1);
		scanf("%s",a[i].name);
		printf("Enter department\n");
		scanf("%s",a[i].dept);
		printf("Enter your marks\n");
		scanf("%d",&a[i].marks);
		printf("Enter your grade\n");
		scanf("%s",a[i].grade);
	}
}
void get_rno(int *r)
{
	printf("Enter the roll no of the student details you want");
	scanf("%d",r);
}
void display(int r,struct student a[])
{
	printf("\nName:%s",a[r-1].name);
	printf("\nDepartment=%s",a[r-1].dept);
	printf("\nMarks=%d",a[r-1].marks);
	printf("\nGrade=%s",a[r-1].grade);
}
void main()
{
	int n,r;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	struct student a[n];
	details(a,n);
	get_rno(&r);
	display(r,a);
}
