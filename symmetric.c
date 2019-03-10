#include<stdio.h>
int input(int m,int n,int a[m][n])
{
    
    printf("Enter the elements");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("element in row%d column%d",i+1,j+1);
        scanf("%d",&a[i][j]);
        }
    }
}
int compute(int m,int n,int a[m][n],int *flag,int b[n][m])
{
    *flag=1;
    if(m==n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            b[i][j]=a[j][i];
        }
        
    }
    else
    *flag=0;
}
int output(int flag,int m,int n,int a[m][n],int b[n][m])
{
    if(flag==0)
    printf("The matrix you entered is not square,so matrix can't be symmetric\n");
    if(flag==1)
    {
        if(a==b)
        printf("The matrix is symmetric");
        else 
        printf("The matrix is not symmetric");
    }
}
void main()
{
    int m,n,flag;
    printf("Enter the order of the matrix");
    scanf("%d%d",&m,&n);
    int a[m][n];int b[n][m];
    input(m,n,a);
    compute(m,n,a,&flag,b);
    output(flag,m,n,a,b);
}
