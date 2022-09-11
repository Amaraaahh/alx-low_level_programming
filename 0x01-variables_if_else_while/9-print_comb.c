#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 *
 * Descripion: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar (j);
		if (j != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
