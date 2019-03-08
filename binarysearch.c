#include<stdio.h>
void get_array(int a[],int *num,int n)
{
	printf("Enter the numbers");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the element you are searching for");
	scanf("%d",num);
}
void sort_array(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			int numb;
			if(a[j]>a[j+1])
			{
				numb=a[j];
				a[j]=a[j+1];
				a[j+1]=numb;
			}
		}
	}
}
int search(int a[],int n,int num,int *pos)
{
	int first,last,mid;
	first=0;
	last=n-1;
	mid=(first+last)/2;
	pos=0;
	while(first<=last)
	{
		if(a[mid]<num)
		{
			first=mid+1;
		}
		if(a[mid]>num)
		{
			last=mid-1;
		}
		if(a[mid]==num)
		{
		*pos=mid;
		}		
	}
	int m=first-last;
	return m;
}
void output(int pos,int num,int m)
{
	if(m==0)
	printf("The element %d is at the position %d",num,pos);
	else
	printf("The element %d is not present in the elements",num);
}
void main()
{
	int n,num,pos,f,m;
	printf("Enter the no.of.elements");
	scanf("%d",&n);
	int a[n];
	get_array(a,&num,n);
	sort_array(n,a);
	m=search(a,n,num,&pos);
	output(pos,num,m);
}
