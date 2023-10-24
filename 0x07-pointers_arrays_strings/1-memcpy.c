#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src to memory area @dest
 * @src: bytes from memory area
 * @dest: bytes to memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
