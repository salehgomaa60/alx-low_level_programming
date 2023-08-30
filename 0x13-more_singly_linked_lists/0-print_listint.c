 #include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nnodes = 0;
const listint_t *current = h;
 while (current != NULL)
 {
printf("%d\n", current->n);
current = current->next;
nnodes++;
}
return (nnodes);
 }
