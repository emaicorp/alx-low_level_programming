#include "main.h"
/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char f;
	int u;

	for (u = 0; u < 10; u++)
	{
		for (f = 'a'; f <= 'z'; f++)
			_putchar(f);
		_putchar('\n');
	}
}
