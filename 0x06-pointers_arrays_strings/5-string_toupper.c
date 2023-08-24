#include "main.h"
/**
 * string_toupper - converts characters from lowercase to uppercase
 * @str: string to be converted to uppercase
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
if ((int)str[i] > 96)
{
str[i] = str[i] - 32;
}
}
return (str);
}
