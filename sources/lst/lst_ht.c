#include "libft.h"

int		lst_ht_push(t_lst_ht *x, void *data)
{
	t_lst	*new;

	if (!x || !(new = lst_new(data)))
		return (1);
	lst_add(&x->head, new);
	if (!x->len++)
		x->tail = x->head;
	return (0);
}

int		lst_ht_push_back(t_lst_ht *x, void *data)
{
	t_lst	*new;

	if (!x)
		return (1);
	if (!x->len)
		return (lst_ht_push(x, data));
	if (!(new = lst_new(data)))
		return (1);
	lst_add_after(x->tail, new);
	x->tail = new;
	x->len++;
	return (0);
}

void	*lst_ht_pop(t_lst_ht *x)
{
	void	*data;
	t_lst	*tmp;

	if (!x || !x->len)
		return (NULL);
	tmp = x->head;
	data = x->head->data;
	x->head = x->head->next;
	free(tmp);
	if (x->len-- == 1)
		x->tail = NULL;
	return (data);
}

void	lst_ht_del(t_lst_ht *x, void (*del)(void*))
{
	if (x)
	{
		x->len = 0;
		lst_del(&x->head, del);
		x->tail = NULL;
	}
}
