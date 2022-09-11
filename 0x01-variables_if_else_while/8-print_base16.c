#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar (h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar (h);
	}
	putchar ('\n');
	return (0);
}
