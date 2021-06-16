#include<stdio.h>
#include<math.h>
// Minimum of two numbers
int mini(int a ,int b)
{
    return a<b?a:b;
}
// Maximum of two numbers
int max(int a ,int b)
{
    return a>b?a:b;
}
// Sum of two numbers
int sum(int a,int b)
{
    return a+b;
}
// Minimum elemetn in an array
int miniElementInArray(int a[],int n)
{
    int mini=999999;
    for(int i=0;i<n;i++)
    {
        if(a[i]<mini)
            mini=a[i];
    }
    return mini;
}
// Maximum element in array
int maxElementInArray(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
// Prime or Not
int isPrime(int n)
{
    if(n==0 || n==1 || n<0)
        return 0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
// Palindrome or not
int isPalindrome(int n)
{
    int rev=0,t=n;
    while(n!=0){
        rev=(rev*10)+(n%10);
        n/=10;
    }
    if(rev==t)
        return 1;
    return 0;
}
// Palindrome optimised
int isPalindromeOpti(int n,int m)
{
    for(int i=0;i<m/2;i++)
    {
        int p;
        if(n%10 != n/((int)(pow(10,m-1)+0.5)))
            return 0;
        n/=10;
        p=pow(10,m-2);
        n=n%p;
        m-=2;
    }
    return 1;
}
// Fibonacci Series
void  Fibonacci(int n)
{
    int t1=0,t2=1,t3;
    for(int i=0;i<n;i++)
    {
        printf("%d ",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
}
int main()
{
    // int arr[10];
    // for(int i=0;i<10;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("%d",(int)(pow(10,2)+0.5));
    // printf("%d",pow(10,2));
    // int a = pow(5, 2);
	// printf("%d", a);
    // int a,b;
    // scanf("%d%d",&a,&b);
    // printf("%d",isPalindromeOpti(a,b));
    Fibonacci(9);
}