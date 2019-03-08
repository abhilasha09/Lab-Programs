#include<stdio.h>
void get_marks(int *marks)
{
	printf("Enter your marks out of 100");
	scanf("%d",marks);
}
void get_grade(char *c,int marks)
{
	if(marks<=80)
	*c='A';
	if((marks<80)&&(marks>=60))
	*c='B';
	if((marks<60)&&(marks>=40))
	*c='C';
	if(marks<40)
	*c='F';
}
void display_grade(int marks,char c)
{
	printf("Your marks are %d and your grade is %c",marks,c);
}
int main()
{
	int marks;char c;
	get_marks(&marks);
	get_grade(&c,marks);
	display_grade(marks,c);
	return 0;
}
