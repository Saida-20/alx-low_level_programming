#include <unistd.h>
#include "main.h"
/**
 * file: 0-putchar.c
 *
 * main - prints "_putchar" followed by a new line.
 * Return: 0 always.
 */
int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;
	char c;

	while (i <= 8){
		c = ch[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
