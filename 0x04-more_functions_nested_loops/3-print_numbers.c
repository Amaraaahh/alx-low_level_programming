#include <stdio.h>
#include "main.h"

/**
 * print numbers -  prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int h;

	for (h >= 48; h <= 58; h++)
	{
		putchar (h);
	}
	putchar (10);
}
