/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void input(int *n,int *r)
{
    printf("Enter the n of nCr and nPr");
    scanf("%d",n);
    printf("Enter the r of nCr and nPr");
    scanf("%d",r);
}
int fact(int n)
{
    int f;f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
        return f;
}
int compute(int n,int r,int *npr,int *ncr)
{
    int n1,r1,n_r,flag;flag=1;int s=n-r;
    if(n>=r)
    {
    n1=fact(n);
    r1=fact(r);
    n_r=fact(s);
    *npr=n1/n_r;
    *ncr=(n1/(r1*n_r));
    }
    else
    flag=0;
    return flag;
}
void output(int ncr,int npr,int flag)
{
    if(flag==0)
    printf("sorry n>r so nCr and nPr is not possible");
    else
    printf("nCr=%d\nnPr=%d",ncr,npr);
}
void main()
{
    int n,r,ncr,npr,flag,f;
    input(&n,&r);
    f=fact(n);
    flag=compute(n,r,&npr,&ncr);
    output(ncr,npr,flag);
    
}
