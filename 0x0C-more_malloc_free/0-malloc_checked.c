#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - the malloc that allocate memory
 * @b: amout of bytes to be  allocated
 *
 * Return: a pointer on the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
