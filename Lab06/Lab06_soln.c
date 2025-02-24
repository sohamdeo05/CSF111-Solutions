// Enter required header file
// Do not include stdlib.h or any other header file not taught in class.
// You should ONLY include stdio.h and math.h
// Do NOT use break and continue statements.
// Do NOT change main

#include <stdio.h>


/**
 * @brief Enter option 1 to find the frequency of a character in a character array.
 * Both the array and the character will be given as inputs from keyboard in main().
 * 
 * Example:
 * Enter the length of the character array: 6
 * Enter the elements of the character array separated by space: 3 g g 4 4 4
 * Enter the character frequency of which is to be found: 4
 * Frequency is: 3
 * 
 * find_frequency is the function where you have to write the code.
*/

int find_frequency(char array[], char ch, int len){
    int i = 0;
    int freq = 0;
    while (i < len)
    {
        if ( array[i] == ch )
        {
            freq += 1;
        }
        i++;
    }
    return freq;
}

/**
 * @brief Enter option 2 to print the hexadecimal value of an input binary number.
 * First, it will ask the length of the binary number to the user in main()
 * In the function, binary_to_hexadecimal(), user will type the binary number with each digit separated by space 
 * (input Most Significant Bit (MSB), i.e. the leftmost digit, first)
 * 
 * The function should print the equivalent hexadecimal value in capital letters on the terminal. 
 * 
 * Do NOT use "%X". You should compute the value.
 * The length of the binary number might be very long. Use arrays.
 * 
 * Example 1:
 * Enter the length of binary number: 6
 * Enter the binary number space separated (MSB first): 1 1 1 1 1 1
 * 3F
 * 
 * Example 2:
 * Enter the length of binary number: 12
 * Enter the binary number space separated (MSB first): 1 1 0 1 1 1 1 0 1 0 0 1
 * DE9
 * 
 * binary_to_hexadecimal is the function where you have to write the code to print the hexadecimal number.
 * 
*/

void binary_to_hexadecimal(int len_of_binary_no) {
    int bits[1000];
    for (int i = 0; i < len_of_binary_no; i++)
        scanf("%d", &bits[i]);
    
    int padding = (4 - (len_of_binary_no % 4)) % 4;
    int total_length = len_of_binary_no + padding;
    int padded_bits[1003];
    
    for (int i = 0; i < padding; i++)   
        padded_bits[i] = 0;
    for (int i = 0; i < len_of_binary_no; i++)
        padded_bits[padding + i] = bits[i];
    
    for (int group = 0; group < total_length / 4; group++) {
        int val = 0;
        for (int j = 0; j < 4; j++)
            val = val * 2 + padded_bits[group * 4 + j];
        printf("%c", val < 10 ? '0' + val : 'A' + val - 10);
    }
    printf("\n");
}


int main(){

    //DO NOT CHANGE main()

    int option;
    printf("Enter 1 for finding frequency of an element in an array\n");
    printf("Enter 2 for binary to hexadecimal conversion\n");
    printf("Enter any other character to exit\n");
    scanf(" %d", &option);
    int i = 1;

    while(i == 1){
        if(option == 1){
            // For case 1, find the frequency of a character in a character array
            int len_of_char_array;
            printf("Enter the length of the character array: ");
            scanf(" %d", &len_of_char_array);
            char array[len_of_char_array];
            printf("Enter the elements of the character array separated by space: ");
            for (int i = 0; i < len_of_char_array; i++){
                scanf(" %c", &array[i]);
            }
            char input;
            printf("Enter the character frequency of which is to be found: ");
            scanf(" %c", &input);
            int frequency = find_frequency(array, input, len_of_char_array);
            printf("Frequency is: %d\n", frequency);
            i++;
        }
        else if(option == 2){
            //Case 2 prints the hexadecimal value of an input binary number, where each digit is separated by space.
            int length_of_binary_no;
            printf("Enter the length of binary number: ");
            scanf("%d", &length_of_binary_no);
            printf("Enter the binary number space separated (MSB first): ");
            binary_to_hexadecimal(length_of_binary_no);
            i++;
        }
        else
            i++;
    }
    return 0;
}

