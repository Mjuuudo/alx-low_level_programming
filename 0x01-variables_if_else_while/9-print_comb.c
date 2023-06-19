#include <stdio.h>
/**
 * Main -Entry Point
 *
 * Description 'It Dosent Work'
 *
 * Return: always 0
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
		putchar(44);
		putchar(32);
	}
	return (0);
}
