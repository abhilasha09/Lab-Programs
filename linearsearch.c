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
int search(int n,int a[],int num,int *position)
{
    int flag;flag=0;
    for(int i=0;i<n;i++)
    {
        if(num==a[i])
        {
        flag=1;
        *position=i+1;
        break;
        }
        else
        flag=0;
    }
    return flag;
}
void display_position(int num,int flag,int position)
{
    if(flag==1)
    printf("THE number %d is at position %d",num,position);
    else
    printf("The number is not found");
}
int main()
{
    int n,num,flag,position;
    printf("Pls enter the number of elements..!");
    scanf("%d",&n);
    int a[n];
    get_array(n,a,&num);
    flag=search(n,a,num,&position);
    display_position(num,flag,position);
}
