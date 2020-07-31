#include "lst.h"

t_lst	*lst_new(void *data)
{
	t_lst	*new;

	if ((new = malloc(sizeof(t_lst))))
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}

void	lst_add(t_lst **first, t_lst *new)
{
	if (first && new)
	{
		new->next = *first;
		*first = new;
	}
}

void	lst_add_after(t_lst *prev, t_lst *new)
{
	if (prev && new)
	{
		new->next = prev->next;
		prev->next = new;
	}
}

void	lst_del(t_lst **first, void (*del)(void*))
{
	t_lst	*lst;

	if (first)
		while (*first)
		{
			lst = *first;
			*first = (*first)->next;
			if (del)
				del(lst->data);
			free(lst);
		}
}
