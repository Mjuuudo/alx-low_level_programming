#include <stdio.h>
/**
 * main - entry point
 * Return: 10 first Digits
 */
int main (void)
{
	int nb = 48;
	int i;

	for(i = nb ; i <= nb+9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
