#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	printf("The size of char: %lu bytes (s) \n", sizeof(char));
	printf("The size of int: %lu bytes (s) \n", sizeof(int));
	printf("The size of long int: %lu bytes (s) \n", sizeof(long int));
	printf("The size of long long int: %lu bytes (s) \n", sizeof(long long int));
	printf("The size of float: %lu bytes (s) \n", sizeof(float));
	return (0);
}
