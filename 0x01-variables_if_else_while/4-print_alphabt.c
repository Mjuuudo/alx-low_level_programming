#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (succes)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
			continue;
			i++;
		putchar(i);
		i++;
	}
	putchar("\n");
	return (0);




}
