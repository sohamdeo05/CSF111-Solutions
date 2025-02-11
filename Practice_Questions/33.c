#include <stdio.h>

int checker(int n, int f)
{
    if(f > 1)
    {
        if(n%f == 0)
        {
            return 0;
        }
        else
        {
            return checker(n, f-1);
        }
        
    }
    return 1;
}


int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        int x = checker(n, n-1);
        return x;
    }
}

int main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d", &n);
    if(isPrime(n))
    {
        printf("The given number is a prime number.\n");
    }
    else
    {
        printf("The given number is NOT a prime number.\n");
    }
    return 0;
}
