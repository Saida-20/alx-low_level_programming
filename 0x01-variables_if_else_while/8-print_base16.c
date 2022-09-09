/*
 * file: 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by
 * a new line.
 *
 * Return: 0 always.
 */
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
