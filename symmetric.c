#include<stdio.h>
int get_matrix(int m,int n,int a[m][n])
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
int transpose_matrix(int m,int n,int a[m][n],int b[n][m])
{
  for(int c = 0; c < m; c++)
        for(int d = 0; d < n; d++) 
            b[d][c] = a[c][d];
}
int display(int m,int n,int a[m][n],int b[n][m])
{
    printf("The matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
int check_matrices(int m,int n,int a[m][n],int b[n][m])
{
    int flag;flag=1;
    if(m==n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=0;
                    break;
                }
            }
            
        }
        if(flag==0)
            {
                printf("\nThe matrix is not symmetric");
            }
        if(flag==1)
        {
            printf("\nThe matrix is symmetric");
        }
    }
    else
    {
        printf("\nThe matrix is not symmetric");
    }
}
void main()
{
    int m,n,flag;
    printf("Enter the order of the square matrix");
    scanf("%d%d",&m,&n);
    int a[m][n];int b[n][m];
    get_matrix(m,n,a);
    transpose_matrix(m,n,a,b);
    display(m,n,a,b);
    check_matrices(m,n,a,b);
}
