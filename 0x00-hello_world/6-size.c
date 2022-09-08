#include <stdio.h>
/**
 * main - print the string in the put function
 *
 * Description: Using the main function
 * program prints size of various types on computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of a int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
