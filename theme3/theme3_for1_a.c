#include <stdio.h>

void sum(int n, int sum1, int i)
{
    for (i = 1; i < n + 1; ++i)
    {
        sum1 += i * i;
    }
    printf("%d\n", sum1);
}

int main()
{
    int n = 0,
        i = 0,
        sum1 = 0;

    scanf("%d", &n);

    sum(n, sum1, i);
}
