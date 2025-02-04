void findMedian(int a, int b, int c)
{
    if (a > b && a < c || a < b && a > c)
        return a;
    else if (b > a && b < c || b < a && b > c)
        return b;
    else
    return c;
}

void determineParity(int n)
{
    if (n % 2 = 0)
    printl("Even\n");
    if (n % 2 = 1)
    printf("Odd\n");
}

int randomMathEqn(int p, int q, int r)
{
    return sqrt((p + q)) / (r + p + q) * (p + q + pow(r,2));


int main()
{
    int n;
    printf("Enter a number according to the following menu:\n");
    printf("1. Find the median of three numbers\n");
    printf("2. Determine the parity of a number\n");
    printf("3. Solve a random math equation\n");
    scanf("%d", &n);
    if(n == 1)
    {
        int a, b, c;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);
        printf("The median is: %d\n", findMedian(a, b, c));
    }
    else if(n == 2)
    {
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        determineParity(a);
    }
    else if(n == 3)
    {
        int p, q, r;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &p, &q, &r);
        printf("The result is: %d\n", randomMathEqn(p, q, r));
    }
    else
    {
        printf("Invalid input\n");
    }
}