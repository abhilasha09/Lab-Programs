#include<stdio.h>
void get_n(int *n)
{
	printf("Enter the number");
	scanf("%d",n);
}
int reverse(int n)
{
	int r,rev,num;n=num;
	while(num!=0)
	{
		r=num%10;
		rev+=r*10;
		num=num/10;
	}
	return rev;
}
void palindrome(int n,int rev)
{
	if(n==rev)
	printf("The given number %d is palindrome",n);
	else
	printf("The given number %d is not palindrome",n);
}
void main()
{
	int n,rev;
	get_n(&n);
	rev=reverse(n);
	palindrome(n,rev);
}
