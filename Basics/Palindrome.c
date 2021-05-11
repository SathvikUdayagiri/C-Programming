#include <stdio.h>
int main()
{
    int n, rev = 0, rem, t;
    printf("Enter a number to check whether it is a Palindrome or not : ");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == t)
        printf("%d is a Palindrome.\n", t);
    else
        printf("%d is not a Palindrome.\n", t);
}