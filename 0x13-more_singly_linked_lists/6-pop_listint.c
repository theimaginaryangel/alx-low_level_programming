#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t list.
  * @head: The head of the linked list.
  *
  * Return: If the linked list is empty, return 0.
  */
int pop_listint(listint_t **head)
{
listint_t *new_head;
int ret;
if (*head == NULL)
{
return (0);
}
new_head = *head;
ret = (*head)->n;
*head = (*head)->next;
free(new_head);
return (ret);
}
