#include <stdio.h>
/**
 *main - entry point
 *Return: 10 first Digits
 */
int main(void)
{
	int nb = 122;

	while (nb >= 97)
	{
		putchar(nb);
		nb--;
	}
	putchar('\n');
	return (0);
}
