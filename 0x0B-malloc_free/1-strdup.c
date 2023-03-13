#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates string to new memory location
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
char *new_str;
int i;

if (str == NULL)
return (NULL);

i = 0;
while (str[i] != '\0')
i++;

new_str = malloc(sizeof(char) * (i + 1));

if (new_str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
new_str[i] = str[i];

return (new_str);
}
