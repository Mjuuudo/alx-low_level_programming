#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;
	int I = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (I <= 90)
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
