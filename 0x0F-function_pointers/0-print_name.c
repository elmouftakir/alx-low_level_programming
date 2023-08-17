#include "function_pointers.h"

/**
 * print_name - prints name.
 * @name: input name.
 * @f: function pointer.
 * Return: no
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

