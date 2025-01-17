#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1); 
		str++;
	}
	write(1, "\n", 1); 
}
