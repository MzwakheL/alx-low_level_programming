#include <stdio.h>

/**
 * main - prints all singlr digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 40; n < 50; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
