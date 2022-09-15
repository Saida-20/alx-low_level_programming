#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int num;

	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (i != 100)
			printf(" ");
		num++;
	}
	printf('\n');

	return (0);
}
