/*
 * file: 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic.
 * @C - the character to be checked
 *
 * Return: 0 always.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
	       return (0);
}
