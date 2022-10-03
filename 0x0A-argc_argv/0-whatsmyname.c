#include "main.h"
#include <stdio.h>

void print_string(char *str);

/**
 * main - Prints its name
 *
 * @argc: Length of argv
 *
 * @argv: Arrays of strings of the program arguments
 *
 * Return: 0, Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	print_string(argv[0]);
	putchar('\n');

	return (0);
}
