#include<stdio.h>
void get_rows(int *n)
{
	printf("Enter no.of rows");
	scanf("%d",n);
}
void display_pattern(int n)
{
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		printf(" ");
		for(j=0;j<(2*i-1);j++)
		printf("*");
		printf("\n");
	}
}
int main()
{
	int n;
	get_rows(&n);
	display_pattern(n);
}
