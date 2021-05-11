//1,1,2,3,5,8,13,................................
#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, c, i;
    printf("Enter the number of elements in fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series of %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}