#include "lists.h"

/**
 * print_listint - elements of a linked list printed
 * @h: linked list of type listint_t
 *
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t num1 = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num1++;
 h = h->next;
 }

 return (num1);
}
