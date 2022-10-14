#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Print a name.
 * @name: The name to print.
 * @f: Pointer the funtion.
 */
void print_name(char *name, void (*f)(char *))
{

	if (f == NULL)
		return;
		(*f)(name);
}
