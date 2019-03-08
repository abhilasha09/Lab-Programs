#include<stdio.h>
void input(int n,int a[])
{
	printf("Enter the numbers");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int no_of_digits()
{
	int n;
	printf("Enter the no of digits you want to compare");
	scanf("%d",&n);
	return n;
}
void compute(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n-i-1;j++)
	{
		int num;
		if(a[j]>a[j+1])
		{
			num=a[j];
			a[j]=a[j+1];
			a[j+1]=num;
		}
	}
	}
}
void output(int a[],int n)
{
	printf("The sorted array is=\n");	
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}
int main()
{
	int n;
	int a[n];
	n=no_of_digits();
	input(n,a);
	compute(n,a);
	output(a,n);
	return 0;
}			
