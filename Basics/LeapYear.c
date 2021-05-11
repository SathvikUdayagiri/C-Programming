#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%400==0 || n%100!=0 && n%4==0)
        printf("It is a Leap Year.\n");
    else
        printf("It is not a Leap Year.\n");
}