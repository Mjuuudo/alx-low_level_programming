#include <stdio.h>
/**
 *main - entry point
 *Return: 10 first Digits
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
