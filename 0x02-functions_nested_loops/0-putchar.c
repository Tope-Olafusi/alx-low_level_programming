#include "main.h"
/**
 * main - main function
 * _putchar: prints putchar alphabets
 * Return: always 0
 */



int main(void)
{
	char alph[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(alph[a]);
	}
	_putchar('\n');

	return (0);
}
