
#include<stdio.h>
void get_string(int n,char ch[])
{
    
    printf("Enter the word");
    for(int i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
    }
}
void copy_string(int n,char ch[],char copy[])
{
    for(int i=0;i<n;i++)
    ch[i]=copy[i];
}
void display_string(int n,char ch[],char copy[])
{
    printf("The original word is ");
    for(int i=0;i<n;i++)
    printf("%s",ch[i]);
    printf("\n");
     printf("The copied word is ");
    for(int i=0;i<n;i++)
    printf("%s",copy[i]);
}
void main()
{
    int n;
    printf("Enter no.of letters in the word");
    scanf("%d",&n);
    char ch[n];char copy[n];
    get_string(n,ch);
    copy_string(n,ch,copy);
    display_string(n,ch,copy);
}
