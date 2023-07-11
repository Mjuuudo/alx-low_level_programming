#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - fn entry
 * @*str: string
 * return : 0
 */
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *n;

	if (str == 0)
		return (0);

	for (; str[len] != '\0'; len++)
	;


	
	n = malloc(len * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);
	else
	{
		for (; i < len ; i++)
			n[i] = str[i];
	}
	return (n);
}
