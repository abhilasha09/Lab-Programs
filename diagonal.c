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
int get_diagonal(int m,int n,int a[m][n],int b[])
{
  int f=0;
  for(int c = 0; c < m; c++)
  {
        for(int d = 0; d < n; d++) 
            {
                if(c==d)
                {
                    int i=a[c][d];
                    b[f]=i;
                    f++;
                }
                
            }
    }
  return f;  
}
int display_diagonal(int m,int n,int f,int b[])
{
    if(m==n)
    {
        printf("The diagonal elements are\n");
        for(int i=0;i<f;i++)
	{
        printf("%d",b[i]);
        printf("\n");
	}
    }
    else
    printf("A rectangular matrix can't have diagonal");
}
void main()
{
    int m,n;
    printf("Enter order");
    scanf("%d%d",&m,&n);
    int a[m][n];
    get_matrix(m,n,a);
    int b[m];
    int f=get_diagonal(m,n,a,b);
    display_diagonal(m,n,f,b);
}
