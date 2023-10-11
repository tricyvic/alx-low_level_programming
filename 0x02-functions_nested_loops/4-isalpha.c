#include "main.h"

/**
* _isalpha - checks for lowercase character
* @c: character is being checked
* Return: 1 if alphabet or 0 of not
*/

int _isalpha(int c)
{
  if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
