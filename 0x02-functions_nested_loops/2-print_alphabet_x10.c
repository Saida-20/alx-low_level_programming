/*
 * file: 2-print_alphabet_x10.c
 */

#include "main.h"

/**
 * main - prints 10m times he alphabet in lowercase.
 */
void alphabet_10x(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
