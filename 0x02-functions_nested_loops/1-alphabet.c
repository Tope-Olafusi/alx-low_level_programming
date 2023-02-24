#include "main.h"
/**
 * main - main function
 * _putchar - print the alphabets in lower case
 *
 * Return: always 0;
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
