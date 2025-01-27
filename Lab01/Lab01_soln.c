#include <stdio.h>

int main(){
    int n;
    printf("Enter the magical number: \n");
    scanf("%d", &n);
    printf("The magical properties of %d are:\n", n);

    if (n%5 == 0 && n%7 == 0)
    {
        printf("- It's a multiple of 5 and 7.\n");
    }
    else if (n%5 == 0)
    {
        printf("- It's a multiple of 5.\n");
    }
    else if (n%7 == 0)
    {
        printf("- It's a multiple of 7.\n");
    }
    else
    {
        printf("- It has no magical properties.\n");
    }

    printf("Thank you for exploring the magical properties!\n");

    return 0;
}
