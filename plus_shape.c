#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    int mid = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == mid || j == mid)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}