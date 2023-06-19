#include <stdio.h>
/**
 *main - entry point
 *Return: 10 first Digits
 */
int main(void)
{
	int i;
	int j;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = 48; j <= 57 ; j++)
		{
			if (i = 49 || j == 48)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
		return (0);
	}
}
