#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: checking the characters
 *
 * Return: Returns 0 if lowercase, else return 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
