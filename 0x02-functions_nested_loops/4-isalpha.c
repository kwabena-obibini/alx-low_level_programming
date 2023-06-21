#include "main.h"

/**
 * _isalpha - checks the alphabets
 * @j: is the charater being used to check
 * Return: 1 if j is a letter, else 0
 */

int _isalpha(int j)
{
	return ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z'));
}
