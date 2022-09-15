#include "main.h"

/**
 * main - print _putchar as a message
 * main -print putchar
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int count sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
