#include <stdio.h>

int calculate_min_divisor(int x)
{
    int i = 2;
    while (x % i != 0)
    {
        i += 1;
    }
    return i;
}

void min_divisor()
{
    int x = 0,
        m = 0;

    scanf("%d", &x);

    m = calculate_min_divisor(x);
    printf("%d\n", m);
} 

int main()
{
    min_divisor();
}
