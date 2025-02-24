/* 

@brief The program performs number system conversions between decimal and binary number systems.

decimalToBinary Function: 
Converts a given decimal number to its binary equivalent.
- For example, decimalToBinary(12) returns 1100.
- Requires num>=0

binaryToDecimal Function: 
Converts a given binary number to its decimal equivalent.
- For example, binarytoDecimal(1111) returns 15.
- Requires num>=0

*/
#include<stdio.h>
#include<math.h>

int decimalToBinary(int num)
{
    int retval = 0;
    int i = 0;
    while (num > 0)
    {
        int rem = num % 2;

        retval += pow(10, i)*rem;

        i++;
        num /= 2;
    }
    return retval;

}

int binaryToDecimal(int num) //Practice Question
{
    int retval = 0;
    int i = 0;
    while (num > 0)
    {
        int rem = num%10;

        retval += rem*pow(2, i);
        
        num /= 10;
        i ++;
    }
    return retval;
}


int main()
{
    int isRunning = 1;

    while(isRunning)
    {
        int choice = 0;
        printf("BASE CONVERTER\nChoose your converter:-\n ");
        printf("\t1. Decimal to Binary.\n\t2. Binary to Decimal.\n\t0. Exit.\nEnter Choice: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            printf("Exiting the converter.\n");
            isRunning = 0;
        }
        else if(choice == 1)
        {
            //decimal to binary
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("The number %d in binary is %d.\n\n", num, decimalToBinary(num));
        }
        else if(choice == 2)
        {
            //binary to decimal
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("The number %d in decimal is %d.\n\n", num, binaryToDecimal(num));
        }
        else
        {
            printf("Invalid option chosen. Try again.\n\n");
        }
    }
}
