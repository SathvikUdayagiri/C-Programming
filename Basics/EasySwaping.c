#include<stdio.h>
int main()
{
    int a=5;
    int b=6;
    b=a+b-(a=b);
    printf("%d %d", a, b);
}