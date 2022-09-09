/*
 * file: 3-print_alphabets.c
 */
#include <stdio.h>

/**
 * main - prints alphabets in lowercase,the in uppercase.
 *
 * Return: 0 always.
 */
int main(void)
{
	char alphabets;
	
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar('\n');
	return (0);
}
