#include <stdio.h>
void get_data(int *h,char *ch)
{
    printf("Enter c for car, t for tempo,b for bus");
    scanf("%c",ch);
    printf("Enter the number of hours you would like to park the vehicle");
    scanf("%d",h);
}
int get_fare(int h,char ch)
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
void display_fare(int f)
{
    printf("Your fare is %d\n Thanks for parking here ;)",f);
}
void main()
{
    int h,f;
    char ch;
    get_data(&h,&ch);
    f=get_fare(h,ch);
    display_fare(f);
}
