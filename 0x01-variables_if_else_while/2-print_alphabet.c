#include <stdio.h>

/**
* main -a program that prints all alphabet.
*
* Return: Always 0.
*/

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
