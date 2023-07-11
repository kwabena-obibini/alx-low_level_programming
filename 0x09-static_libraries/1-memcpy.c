#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: stores memory
 *@src: copies memory
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int u = n;

	for (; x < u; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
