#include <stdio.h>
int main()
{
    int n, c = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i != 1 && i % 2 != 0)
        {
            c += n;
        }
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                if (c + (n - j) >= 1 && c + (n - j) < 10)
                {
                    printf("0%d ", c + (n - j));
                }
                else
                {
                    printf("%d ", c + (n - j));
                }
            }
            else
            {
                if (c >= 1 && c < 10)
                {
                    printf("0%d ", c);
                    c++;
                }
                else
                {
                    printf("%d ", c);
                    c++;
                }
            }
        }
        printf("\n");
    }
}