#include<stdio.h>
void input(int *n)
{
    printf("Enter the n");
    scanf("%d",n);
}
int prime(int n,int a[])
{
    int m;m=0;
    for(int i=6;i<=n+i+1;i++)
    {
        if((i%2!=0)&&(i%3!=0)&&(i%5!=0))
        {
        a[m]=i;
        m++;
        }
    }
    return m;
}
void output(int a[],int m)
{
    printf("The prime no.s are 2,3,5");
    for(int i=0;i<=m;i++)
    printf("%d\n",a[i]);
}
void main()
{
    int n,m;
    input(&n);
    int a[n];
    m=prime(n,a);
    output(a,m);
}
