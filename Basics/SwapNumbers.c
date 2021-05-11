#include <stdio.h>
int main()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    printf("before swaping the numbers are %d , %d \n", a, b);
    //using 3 variables
    // t = a;
    // a = b;
    // b = t;
    //using 2 variables
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping the numbers are %d , %d \n", a, b);
}