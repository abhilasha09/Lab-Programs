#include<stdio.h>
void get_number(int *n)
{
    printf("Enter your number");
    scanf("%d",n);
}
int armstrong(int n)
{
    int num;
    num=n;
    int d,new;
    while(num!=0)
    {
        d=num%10;
        new=new+(d*d*d);
        num=num/10;
    }
    return new;
}
void display(int n,int new)
{
    if(n=new)
    printf("The given number is armstrong");
    else
    printf("The given number is not armstrong");
}
void main()
{
    int new,n;
    get_number(&n);
    new=armstrong(n);
    display(n,new);
}
