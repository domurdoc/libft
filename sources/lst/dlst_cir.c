#include "libft.h"

int		dlst_cir_push(t_dlst_cir *x, void *data)
{
	t_dlst	*new;

	if (!x || !(new = dlst_new(data)))
		return (1);
	if (!x->len)
	{
		new->next = new;
		new->prev = new;
	}
	else if (x->len == 1)
	{
		new->prev = x->cur;
		new->next = x->cur;
		x->cur->prev = new;
		x->cur->next = new;
	}
	else
		dlst_add_before(x->cur, new);
	x->cur = new;
	x->len++;
	return (0);
}

void	*dlst_cir_pop(t_dlst_cir *x)
{
	void	*data;
	t_dlst	*tmp;

	if (!x || !x->len)
		return (NULL);
	tmp = x->cur;
	data = x->cur->data;
	x->cur = x->cur->next;
	if (x->len == 1)
		x->cur = NULL;
	else if (x->len == 2)
	{
		x->cur->next = x->cur;
		x->cur->prev = x->cur;
	}
	else
		dlst_disconnect(tmp);
	free(tmp);
	x->len--;
	return (data);
}

void	dlst_init(t_dlst_cir *x)
{
	if (!x)
		return ;
	x->cur = NULL;
	x->len = 0;
}