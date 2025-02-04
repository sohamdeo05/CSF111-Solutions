#include <stdio.h>

/*
    The Inverted triangle of Stars Adventure
    After successfully unlocking the secrets of the triangle of Stars, Leo the adventurer has now stumbled upon another mysterious scroll. This time, it describes the **Inverted triangle of Stars**, a structure that holds even more powerful ancient magic. According to the scroll, this inverted triangle must be constructed by flipping the original triangle upside down, starting with the largest row at the top and tapering down to a single star at the bottom.

    The challenge now is even greater, for the construction of this inverted triangle requires Leo’s knowledge of recursion. Just like before, Leo must print the triangle using only recursion, but this time the triangle will start wide at the top and narrow down as you move down each row.

    Your task is to help Leo print this inverted triangle, where the number of stars decreases as you move down, and the number of spaces increases.

    EXAMPLE-

    INPUT:
    4
    OUTPUT:
    Enter the number of rows for the inverted triangle:
    Welcome, brave adventurer! Behold the Inverted triangle of Stars with 4 rows:
    ****
    ***
    **
    *
    Well done, adventurer! The Inverted triangle is complete!

    INPUT:
    5
    OUTPUT:
    Enter the number of rows for the inverted triangle:
    Welcome, brave adventurer! Behold the Inverted triangle of Stars with 5 rows:
    *****
    ****
    ***
    **
    *
    Well done, adventurer! The Inverted triangle is complete!
*/

void invertedTriangle(int n)
{
    if (n>0)
    {
        int x = 0;
        while (x<n)
        {
            printf("*");
            x += 1;
        }
        printf("\n");
        n -= 1;
        invertedTriangle(n);
    }
}

// DO NOT CHANGE MAIN
int main()
{
    int n;
    printf("Enter the number of rows for the inverted triangle: \n");
    scanf("%d", &n);

    printf("Welcome, brave adventurer! Behold the Inverted triangle of Stars with %d rows:\n", n);

    // Call the recursive function to print the inverted triangle
    invertedTriangle(n);

    printf("Well done, adventurer! The Inverted triangle is complete!\n");

    return 0;
}
