/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void get_array(int n,int a[],int *num)
{
    printf("Rnter the numbers!\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to saerch for\n");
    scanf("%d",num);
}
int search(int n,int a[],int num,int *pos)
{
    int flag;flag=0;
    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
        flag=1;
        *pos=i+1;
        break;
        }
        else
        flag=0;
    }
    return flag;
}
void output(int num,int flag,int pos)
{
    if(flag==1)
    printf("THE number %d is at position %d",num,pos);
    else
    printf("The number is not found");
}
int main()
{
    int n,num,flag,pos;
    printf("Pls enter the number of elements..!");
    scanf("%d",&n);
    int a[n];
    get_array(n,a,&num);
    flag=search(n,a,num,&pos);
    output(num,flag,pos);
}
