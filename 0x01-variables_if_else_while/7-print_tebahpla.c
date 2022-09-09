/*
 * file: 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0always.
 */
int main(void)
{
	char alphabets;

	for (alphabets = ''z'; alphabets >= 'a'; alphabet--)
		putchar(alphabets);

	putchar('\n');
	return (0);
}
