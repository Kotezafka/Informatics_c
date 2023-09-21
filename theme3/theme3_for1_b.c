#include <stdio.h>

void calculate_factorial(int n)
{
    int factorial1 = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        factorial1 *= i;
    }
    printf("%d\n", factorial1);
}

void factorial()
{
    int n = 0;
    
    scanf("%d", &n);

    calculate_factorial(n);
}

int main()
{
    factorial();
}
