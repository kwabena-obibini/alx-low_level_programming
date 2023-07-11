#include "main.h"

/**
 * _strcmp - comparing a string value
 * @s1: input a value
 * @s2: input a value
 *
 * Return: s1[e] - s2[e]
 */

int _strcmp(char *s1, char *s2)
{
	int e;

	e = 0;
	while (s1[e] != '\0' && s2[e] != '\0')
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
	e++;
	}
	return (0);
}
