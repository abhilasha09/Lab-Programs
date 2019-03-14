#include<stdio.h>
struct fraction
{
int num,den;
};
void input(struct fraction *f)
{
printf("Enter the numerator");
scanf("%d",f->num);
printf("Enter the denominator");
scanf("%d",f->den);
}

void compute(struct fraction f)
{
float m;
struct fraction f1;
f1=f;
m=(m.num/m.den)
