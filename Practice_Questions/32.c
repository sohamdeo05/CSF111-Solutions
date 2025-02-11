#include <stdio.h>

void printer(int n, int f)
{
    if(0 < f && f <= n)
    {
        double x = n%f;
        int y = n/f;
        if(x == 0)
        {
            printf("%d\n", y);
            printer(n, f-1);
        }
        else
        {
            printer(n, f-1);
        }
    }
    else
    {
        return;
    }
}

void print_factors(int n)
{
    printer(n, n);
}


int main()
{
    printf("Enter the number whose factors you want to find: ");
    int n;
    scanf("%d", &n);
    print_factors(n);
    return 0;
}
