#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    char keywords[2]={"if","else"};
    printf("enter the string");
    scanf("%s",ch);
    for(int i=0;i<strlen(ch);i++)
    {
        printf("%c",keywords[i]);
    }
}