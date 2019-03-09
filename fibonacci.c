#include<stdio.h>
void input(int *n)
{
    printf("Enter the number of elements");
    scanf("%d",n);
}
int fibonacci(int n,int a[])
{
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
}
void display(int a[],int n)
{
    printf("The fibonacci series is\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
void main()
{
    int n;
    input(&n);
    int a[n];
    fibonacci(n,a[]);
    display(a,n);
}
