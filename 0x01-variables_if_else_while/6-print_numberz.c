#include <stdio.h>
/**
 * Main - Entry Point
 * Description: 'Printing the 10 first digits using putchar'
 * Return: always 0
 */
int main(void)
{
	int nb = 48;

	while (nb <= 57)
	{
		putchar(nb);
		nb++;
	}
	putchar('\n');
	return (0);
}
