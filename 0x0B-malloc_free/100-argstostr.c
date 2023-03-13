#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: an array of arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int i, j, n, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

str = malloc(sizeof(char) * (len + ac + 1));
if (str == NULL)
return (NULL);

n = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[n] = av[i][j];
n++;
}
str[n] = '\n';
n++;
}
str[n] = '\0';

return (str);
}
