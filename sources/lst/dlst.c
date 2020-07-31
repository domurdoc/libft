#include "libft.h"

t_dlst	*dlst_new(void *data)
{
	t_dlst	*new;

	if ((new = malloc(sizeof(t_dlst))))
	{
		new->data = data;
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}

void	dlst_add_before(t_dlst *cur, t_dlst *new)
{
	if (cur && new)
	{
		if (cur->prev)
			cur->prev->next = new;
		new->prev = cur->prev;
		new->next = cur;
		cur->prev = new;
	}
}

void	dlst_add_after(t_dlst *cur, t_dlst *new)
{
	if (cur && new)
	{
		if (cur->next)
			cur->next->prev = new;
		new->next = cur->next;
		new->prev = cur;
		cur->next = new;
	}
}

/*
** dlst_disconnect() expacts the list to have at least 3 elements.
*/

void	dlst_disconnect(t_dlst *cur)
{
	if (!cur)
		return ;
	cur->next->prev = cur->prev;
	cur->prev->next = cur->next;
	cur->prev = NULL;
	cur->next = NULL;
}

void	dlst_del(t_dlst **head, void (*del)(void*))
{
	t_dlst	*cur;

	while (*head)
	{
		cur = *head;
		*head = (*head)->next;
		if (del)
			del(cur->data);
		free(cur);
	}
}
