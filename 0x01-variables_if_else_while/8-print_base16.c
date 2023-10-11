#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (success)
*/
int main(void)
{
char ch;
int num;
for (num = 0 ; num < 10 ; num++)
{
putchar('0' + num);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
