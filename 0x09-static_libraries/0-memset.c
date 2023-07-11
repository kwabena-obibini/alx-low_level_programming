#include "main.h"

/**
 * _memset - filling blocks of mem with value
 * 
 * @s: the starting memory address to be filled
 * @d: the value
 * @n: the bytes to be changed
 *
 * Return: change new value for n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
