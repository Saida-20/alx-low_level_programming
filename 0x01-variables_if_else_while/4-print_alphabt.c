/*
 * file: 4-print_alphabt.c
 */

#include <stdio.h>
/**
 * main - prints alphabets in lowercase except q and e.
 *
 * Return: 0 always.
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);
	}

	putchar('\n');
	return (0);
}
