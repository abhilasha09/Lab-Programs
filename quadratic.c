#include<stdio.h>
#include<math.h>
struct complex
{
	float real;
	float imaginary;
};
void input(float *a,float *b,float *c)
{
	printf("Enter the coefficients a,b,c");
	scanf("%f%f%f",a,b,c);
}
void compute(float a,float b,float c,float *r1,float *r2,float *det,struct complex *m)
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
		m->real=-b/(2*a);//real part
		m->imaginary=sqrt(-(*det)/(2*a));//imaginary part
	}
}
void output(float r1,float r2,float det,struct complex m)
{
	if(det>0)
	printf("Roots are real and unequal: %f and %f",r1,r2);
	if(det<0)
	printf("Roots are imaginary: %f +i %f,%f-i%f",m.real,m.imaginary,m.real,m.imaginary);
	if(det==0)
	printf("Roots are real and equal: %f and %f",r1,r2);
}
int main()
{
	float a,b,c,r1,r2,det;
	input(&a,&b,&c);
	struct complex m;
	compute(a,b,c,&r1,&r2,&det,&m);
	output(r1,r2,det,m);
	return 0;
}



