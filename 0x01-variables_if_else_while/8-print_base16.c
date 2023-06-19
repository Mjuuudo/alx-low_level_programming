#include <stdio.h>
/**
 * Main - Entry Point
 *
 * Description ' Double Boucle '
 *
 * Return: 0 (success)
 */
int main(void)
{
	int nb = 48;
	int nl = 97;

	for (int x = nb ; x <= nb + 9 ; x++)
	{
		putchar(x);
	}
	for (int i = nl ; i <= nl + 5 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
