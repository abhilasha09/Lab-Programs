#include<stdio.h>
int input(int m,int n,int p,int q,int a[m][n],int b[p][q])
{
	int i,j;
	printf("Enter matrix 1\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter element row%d column%d\n",i+1,j+1);;
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix 2\n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("Enter element row%d column%d\n",i+1,j+1);;
			scanf("%d",&b[i][j]);
		}
	}	
}
int compute(int m,int n,int p,int q,int a[m][n],int b[p][q],int res[m][q])
{
	int i,j,k,sum;
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
			sum+=(a[i][k])*(b[k][j]);
			res[i][j]=sum;
			}
		}
	sum=0;
	}


	
}
void output(int m,int n,int p,int q,int res[m][q])
{
	if(n!=p)
	{
	printf("Matrix multiplication is not possible");
	}
	else
	{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("%d\t",res[i][j]);
		}
	printf("\n");
	}
	}
}
void main()
{
int m,n,p,q;
printf("Enter the order of the Matrix 1\n");
scanf("%d%d",&m,&n);
printf("Enter the order of the Matrix 2\n");
scanf("%d%d",&p,&q);
int a[m][n];int b[p][q];int res[m][q];
input(m,n,p,q,a,b);
compute(m,n,p,q,a,b,res);
output(m,n,p,q,res);
}




	 
