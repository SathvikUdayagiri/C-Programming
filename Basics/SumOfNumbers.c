#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number at sum the digits : ");
    scanf("%d",&n);
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("The sum of the digits in the number : %d",sum);
}