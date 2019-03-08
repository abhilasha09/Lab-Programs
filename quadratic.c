#include<stdio.h>
#include<math.h>
void input(float *a,float *b,float *c)
{
	printf("Enter the coefficients a,b,c");
	scanf("%f%f%f",a,b,c);
}
void compute(float a,float b,float c,float *r1,float *r2,float *det)
{
	*det=b*b-4*a*c;
	if(*det>0)
	{
	 	*r1=(-b+sqrt(*det))/(2*a);
 		*r2=(-b-sqrt(*det))/(2*a);
	}
	if(*det==0)
	{
		*r1=*r2=-b/(2*a);
	}
	if(*det<0)
	{
		*r1=-b/(2*a);//real part
		*r2=sqrt(-(*det)/(2*a));//imaginary part
	}
}
void output(float r1,float r2,float det)
{
	if(det>0)
	printf("Roots are real and unequal: %f and %f",r1,r2);
	if(det<0)
	printf("Roots are imaginary: %f +i %f,%f-i%f",r1,r2,r1,r2);
	if(det==0)
	printf("Roots are real and equal: %f and %f",r1,r2);
}
int main()
{
	float a,b,c,r1,r2,det;
	input(&a,&b,&c);
	compute(a,b,c,&r1,&r2,&det);
	output(r1,r2,det);
	return 0;
}







