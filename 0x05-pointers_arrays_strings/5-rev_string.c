#include "main.h"
/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int end, length = 0, start = 0;
char temp;
while (s[length] != '\0')
{
length++;
}
end = length - 1;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
