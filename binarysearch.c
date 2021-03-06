#include<stdio.h>
void input(int n,int a[],int *num)
{
	printf("Enter the elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you are searching for");
	scanf("%d",num);
}
void swap(int *x, int *y) 
{ 
    int temp = *x;
    *x= *y; 
    *y= temp; 
} 
void sort(int n,int a[])
{
    int i,j,min;
    for (i=0;i<n-1;i++) 
    { 
        min=i; 
        for(j=i+1;j<n;j++)
          if (a[j]<a[min]) 
            min=j; 
     swap(&a[min],&a[i]); 
    } 
}
int search(int n,int a[],int num,int *first,int *last)
{
	int mid,position;
	*first=0;
	*last=n-1;
	mid=(*first+ *last)/2;
	while(*first<= *last)
	{
		if(a[mid]<num)
		*first=mid+1;
		if(a[mid]>num)
		*last=mid-1;
		if(a[mid]==num)
		{
		position=mid+1;
		break;
		}
		mid=(*first+ *last)/2;
	}
	return position;
}
void display_position(int num,int first,int last,int position)
{
	if(first>last)
	printf("The element does not exist");
	else
	printf("The element %d is at position %d",num,position);
}
void main()
{
	int n,num,position,first,last;
	printf("Enter the no.of.elements");
	scanf("%d",&n);
	int a[n];
	input(n,a,&num);
	sort(n,a);
	pos=search(n,a,num,&first,&last);
	display_position(num,first,last,position);
}
