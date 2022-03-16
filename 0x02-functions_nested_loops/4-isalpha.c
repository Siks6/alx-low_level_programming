#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 * @c: entered character
 * Return: 1 if alphabetic or 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
