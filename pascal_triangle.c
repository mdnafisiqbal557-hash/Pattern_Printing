#include <stdio.h>
int main()
{
    int i, j, k, n = 4, c;
    for (i = 0; i <= n; i++)
    {
        for (k = 0; k <= n - i - 1; k++)
            printf(" ");
        c = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
}