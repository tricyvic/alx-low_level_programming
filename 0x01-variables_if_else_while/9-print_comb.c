#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (success)
*/
int main(void)
{
int num;
for (num = 0 ; num <= 9 ; num++)
{
if (num != 0)
{
putchar(' ');
}
putchar('0' + num);
if (num != 9)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
