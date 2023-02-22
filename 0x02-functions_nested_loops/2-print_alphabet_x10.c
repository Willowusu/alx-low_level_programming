#include "main.h"

/**
 * print_alphabet_x10 - printletters of the alphabet 10 times
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing because of void data type.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
