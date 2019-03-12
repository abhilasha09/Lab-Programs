#include <stdio.h>
void get_n_r(int *n,int *r)
{
    printf("Enter the n of nCr and nPr");
    scanf("%d",n);
    printf("Enter the r of nCr and nPr");
    scanf("%d",r);
}
int factorial(int n)
{
    int f;f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
        return f;
}
int compute_ncr_npr(int n,int r,int *npr,int *ncr)
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
void display(int ncr,int npr,int flag)
{
    if(flag==0)
    printf("sorry n>r so nCr and nPr is not possible");
    else
    printf("nCr=%d\nnPr=%d",ncr,npr);
}
void main()
{
    int n,r,ncr,npr,flag,f;
    get_n_r(&n,&r);
    f=factorial(n);
    flag=compute_ncr_npr(n,r,&npr,&ncr);
    display(ncr,npr,flag);
    
}
