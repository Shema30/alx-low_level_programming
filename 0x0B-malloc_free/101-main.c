#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
int i;

for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}

/**
 * main - Entry point
 *
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
char **tab;

tab = strtow("ALX School #cisfun");
if (tab == NULL)
{
printf("Failed\n");
return (1);
}
print_tab(tab);
return (0);
}
