#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if string contains only digits
 * @str: String to check
 *
 * Return: 1 if string contains only digits, otherwise 0
 */

int check_num(char *str)
{
unsigned int count = 0;

while (count < strlen(str))
{
if (!isdigit(str[count]))
return (0);

count++;
}
return (1);
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int count = 1, str_to_int, sum = 0;

while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}

printf("%d\n", sum);

return (0);
}
