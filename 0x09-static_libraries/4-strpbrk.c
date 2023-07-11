#include "main.h"

/**
 * _strpbrk - Starting point
 * @s: The input
 * @accept: inputs
 * Return: Always 0 on Success
 */
char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
		if (*s == accept[q])
		return (s);
		}
	s++;
	}

return ('\0');
}
