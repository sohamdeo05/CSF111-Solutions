#include <stdio.h>

int power(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n > 0)
    {
        return m * power(m, n - 1);
    }
}

int main()
{
    int m, n;
    printf("Please enter the value of m: ");
    scanf("%d", &m);
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    printf("%d raised to the power of %d is %d\n", m, n, power(m, n));
    return 0;
}
