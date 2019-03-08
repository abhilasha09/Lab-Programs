#include<stdio.h>
void input(int *n)
{
	printf("Enter no.of rows");
	scanf("%d",n);
}
void output(int n)
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
	input(&n);
	output(n);
}
