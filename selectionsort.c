#include<stdio.h>
int get_array(int n,int a[])
{
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
                    printf("Enter the element %d",i+1);
                    scanf("%d",&a[i]);
}
}
void swap(int *x, int *y) 
{ 
    int temp = *x;
    *x= *y; 
    *y= temp; 
} 
int sort(int n,int a[])
{
    int i,j,min;
    for (i = 0; i < n-1; i++) 
    { 
        min= i; 
        for(j=i+1;j<n;j++)
          if (a[j]<a[min]) 
            min=j; 
     swap(&a[min],&a[i]); 
    } 
} 
int display(int n,int a[])
{
    printf("The minimum number=%d",a[0]);
    printf("The maximum number=%d",a[n-1]);
}
            
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a[n];
    get_array(n,a);
    sort(n,a);
    display(n,a);
}
