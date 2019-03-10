
#include<stdio.h>
void get_string(int n,char ch[])
{
    
    printf("Enter the word");
    scanf("%s",ch);

}
void copy_string(int n,char ch[],char copy[])
{
    for(int i=0;i<n;i++)
    copy[i]=ch[i];
}
void display_string(int n,char ch[],char copy[])
{
    printf("The original word is ");
    printf("%s",ch);
    printf("\n");
    printf("The copied word is ");
    printf("%s",copy);
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
