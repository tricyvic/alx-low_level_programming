#include "main.h"

/**
* _islower - checks for lowercase character
* @c: character is being checked
* Return: 1 if lowercase or 0 of not
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
