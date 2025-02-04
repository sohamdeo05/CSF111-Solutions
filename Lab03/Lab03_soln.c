#include <stdio.h>

/*
    The Triangle of Stars Adventure
    A curious adventurer named Leo has just discovered an ancient scroll that describes the magical Triangle of Stars. The triangle is said to be a simple yet powerful structure. Leo must print a triangle using stars, where the first row contains one star, the second row contains two stars, and so on, until the specified number of rows, N.

    Your task is to help Leo print this triangle pattern, using only recursion.

    EXAMPLE-

    INPUT:
    4
    OUTPUT:
    Enter the number of rows for the triangle:
    Welcome, brave adventurer! Behold the Triangle of Stars with 4 rows:
    *
    **
    ***
    ****
    Well done, adventurer! The Triangle is complete!

    INPUT:
    5
    OUTPUT:
    Enter the number of rows for the triangle:
    Welcome, brave adventurer! Behold the Triangle of Stars with 5 rows:
    *
    **
    ***
    ****
    *****
    Well done, adventurer! The Triangle is complete!
*/

void printStars(int n)
{
    if (n<=0)
    {
        printf("\n");
    }
    else
    {
        printf("*");
        printStars(n-1);
    }
}

// Recursive function to print stars for each row
void printTriangle(int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
        printTriangle(n-1);
        printStars(n);
    }
}


// DO NOT CHANGE MAIN
int main()
{
    int n;

    // Get the number of rows for the triangle
    printf("Enter the number of rows for the triangle:\n");
    scanf("%d", &n);

    // Display introductory message
    printf("Welcome, brave adventurer! Behold the Triangle of Stars with %d rows:\n", n);

    // Call the recursive function to print the triangle
    printTriangle(n);

    // Display conclusion message
    printf("Well done, adventurer! The Triangle is complete!\n");

    return 0;
}
