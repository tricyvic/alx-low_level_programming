#include "main.h"

/**
* print_sign -print the sign of a number
*@n:int to be checked
* Return: 1 positive num,-1 fo negative num or zero for zero any other
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
