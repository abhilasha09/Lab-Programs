
#include <stdio.h>
void input(int *h,char *ch)
{
    printf("Enter c for car, t for tempo,b for bus");
    scanf("%c",ch);
    printf("Enter the number of hours you would like to park the vehicle");
    scanf("%d",h);
}
int fare(int h,char ch)
{
    int f;
    switch(ch)
    {
        case 'c':
        if(h<=2)
        f=20*h;
        if(h>2)
        f=20*h+30*(h-2);
        return f;
        break;
        case 'b':
        if(h<=2)
        f=40*h;
        if(h>2)
        f=40*h+50*(h-2);
        return f;
        break;
        case 't':
        if(h<=2)
        f=30*h;
        if(h>2)
        f=30*h+40*(h-2);
        return f;
        break;
    }
}
void output(int f)
{
    printf("Your fare is %d\n Thanks for parking here ;)",f);
}
void main()
{
    int h,f;
    char ch;
    input(&h,&ch);
    f=fare(h,ch);
    output(f);
}
