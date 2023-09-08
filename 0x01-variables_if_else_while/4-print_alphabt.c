#include <stdio.h>

/**
* main - a program that prints alphabet except e and q
*
* Return: Always 0.
*/

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (( letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
