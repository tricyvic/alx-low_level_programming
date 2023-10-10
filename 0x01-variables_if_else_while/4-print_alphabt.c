#include <stdio.h>

/**
*main - Entry point
*Return: 0 (success)
*/

int main(void)
{
int ch = 'a';

while (ch<='z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
}
else
{
putchar(ch);
ch++;
}
}
putchar('\n');

return (0);
}
