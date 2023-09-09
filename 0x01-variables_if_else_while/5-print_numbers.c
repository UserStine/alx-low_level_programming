#include <stdio.h>

/**
* main -a program that prints numbers from 0 to 9.
*
* Return: Always 0.
*/

int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
