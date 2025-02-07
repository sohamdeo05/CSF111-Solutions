#include <stdio.h>

/**
 * Author:
 * BITS_ID:
 * Date: 2025-02-07
 */

/**
 * @brief Prints the given character `c` `count` number of times.
 * Example:
 *    repeat('*', 3) prints "***"
 *    repeat('+', 0) prints ""
 * Requires: count >= 0.
 */
void repeat(char c, int count)
{
}

/**
 * @brief Prints the english alphabets up to the given alphabet `c` in the descending order.
 *
 * Example:
 *    enumerate('c') prints "cba"
 *    enumerate('z') prints "zyxwvutsrqponmlkjihgfedcba"
 * Requires:
 *    'a' <= c <= 'z'
 */
void enumerate(char c)
{
}

/**
 * @brief Prints the english alphabets up to the given alphabet `c` in the descending order and ascending order.
 *
 * Example:
 *    double_enumerate('a') prints "a"
 *    double_enumerate('c') prints "cbabc"
 * Requires:
 *    'a' <= c <= 'z'
 */
void double_enumerate(char c)
{
}

int main()
{
  printf("1. repeat.  2. enumerate  3. double_enumerate\n");
  printf("Enter the number for the operation of your choice: ");

  int option = 0;
  scanf(" %d", &option);
  char c = ' ';

  if (option == 1)
  {
    // Task 1
    printf("Enter any printable character: ");
    scanf(" %c", &c);
    int n = 0;
    printf("Enter count: ");
    scanf(" %d", &n);
    repeat(c, n);
  }
  else if (option == 2)
  {
    // Taks 2
    printf("Enter a lower-case letter: ");
    scanf(" %c", &c);
    enumerate(c);
  }
  else if (option == 3)
  {
    // Task 3
    printf("Enter a lower-case letter: ");
    scanf(" %c", &c);
    double_enumerate(c);
  }
  printf("\n");
  return 0;
}