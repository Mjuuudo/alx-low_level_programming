#include <stdio.h>
/**
 *main - entry point
 *Return: 10 first Digits
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
