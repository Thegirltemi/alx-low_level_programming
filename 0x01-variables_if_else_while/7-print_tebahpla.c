#include <stdio.h>

/**
 * main - print the alphabeths in reverse
 * Return: Always
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
