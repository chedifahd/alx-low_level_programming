#include <stdlib.h> 
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocates
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		return NULL;
	else
	return (p);
}
