#include <stdio.h>
/**
 * Main - Entry Point
 * Description: 'Reverse The Output of alphabet'
 * Return: always 0
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
