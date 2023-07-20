#include "function_pointers.h"
/**
 * print_name - fn entry
 * @name: string
 * @f: the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
