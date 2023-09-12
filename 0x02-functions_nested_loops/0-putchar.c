#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";

	print_putchar(c);

	putchar('\n');

	return (0);
}
/**
 *print_putchar - Printing a _putchar string
 *
 *Description: Printing a _putchar string
 * @string: A string of characters
 */

void print_putchar(char c)
{
	for (int i = 0; c[i] != '\o'; i++)
		putchar(c[i]);


}
