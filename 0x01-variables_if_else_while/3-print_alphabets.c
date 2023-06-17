#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int I;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (I = 'A' ; I <= 'Z' ; I++)
		putchar(I);
	return (0);
}
