#include<stdio.h>
int get_numbers(int *a,int *b)
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
int swap_2nos(int a,int b)
{
    swap(&a,&b);
}
void display_swap(int a,int b)
{
    printf("The swapped numbers are %d and %d ",a,b);
}
int main()
{
    int a,b;
    get_numbers(&a,&b);
    swap(&a,&b);
    swap_2nos(a,b);
    display_swap(a,b);
    return 0;
}
