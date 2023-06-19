#include <stdio.h>
/**
 * Main - Only Entry
 * Description Printing alphabet in lower case
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;

	for (int x = i ; x <= i+25 ; x++)
	{
		if (x == 101 || x == 113)
		{
			continue;
			x++;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
