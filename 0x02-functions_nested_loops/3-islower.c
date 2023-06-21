#include "main.h"

/**
 * _islower - check if char is lowercase
 * @i: using if/else loop to check for lowercase alphabets
 * Return: 1 if char is lowercase, else 0.
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
