#include <stdlib.h> 
#include "main.h"
/**
 * malloc - allocates memory
 * Return: a pointer to the allocated memory.
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
