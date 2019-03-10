#include<stdio.h>
int input(int *a,int *b)
{
    printf("Enter the numbers");
    scanf("%d%d",a,b);
}
int swap(int *a,int *b)
{
    int t;
   t  = *b;
   *b = *a;
   *a = t;
}
int compute(int a,int b)
{
    swap(&a,&b);
}
void output(int a,int b)
{
    printf("The swapped numbers are %d and %d ",a,b);
}
int main()
{
    int a,b;
    input(&a,&b);
    swap(&a,&b);
    compute(a,b);
    output(a,b);
    return 0;
}
