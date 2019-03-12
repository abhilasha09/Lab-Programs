#include<stdio.h>
#include<math.h>
struct complex
{
	float real;
	float imaginary;
};
void coefficients(float *a,float *b,float *c)
{
	printf("Enter the coefficients a,b,c");
	scanf("%f%f%f",a,b,c);
}
void get_roots(float a,float b,float c,float *det,struct complex *m,struct complex *m1)
{
	*det=b*b-4*a*c;
	if(*det>0)
	{
	 	m->real=(-b+sqrt(*det))/(2*a);
		m->imaginary=0;
 		m1->real=(-b-sqrt(*det))/(2*a);
		m1->imaginary=0;
	}
	if(*det==0)
	{
		m->real=m1->real=-b/(2*a);
		m->imaginary=m1->imaginary=0;
	}
	if(*det<0)
	{
		m->real=-b/(2*a);//real part
		m->imaginary=sqrt(-(*det)/(2*a));//imaginary part
	}
}
void display(float det,struct complex m,struct complex m1)
{
	if(det>0)
	printf("Roots are real and unequal: %f+i %f and %f+i %f",m.real,m.imaginary,m1.real,m1.imaginary);
	if(det<0)
	printf("Roots are imaginary: %f +i %f,%f-i%f",m.real,m.imaginary,m1.real,m1.imaginary);
	if(det==0)
	printf("Roots are real and equal: %f+i %f and %f+i %f",m.real,m.imaginary,m.real,m1.imaginary);
}
int main()
{
	float a,b,c,r1,r2,det;
	coefficients(&a,&b,&c);
	struct complex m;
	struct complex m1;
	get_roots(a,b,c,&det,&m,&m1);
	display(det,m,m1);
	return 0;
}



