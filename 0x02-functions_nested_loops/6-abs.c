/*
 * file: 6-abs.c
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: absolute value ofan integer.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
