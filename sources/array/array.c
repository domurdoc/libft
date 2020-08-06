#include "array.h"

t_array	*ar_new(uint32_t cap)
{
	t_array	*new;

	if (!cap)
		return (NULL);
	if (!(new = malloc(sizeof(t_array))))
		return (NULL);
	if (!(new->data = malloc(sizeof(void*) * cap)))
	{
		free(new);
		return (NULL);
	}
	new->len = 0;
	new->cap = cap;
	new->opt = NULL;
	return (new);
}

int		ar_extend(t_array *ar, uint32_t extra_cap)
{
	void	**data;
	size_t	new_cap;

	if (!ar || (new_cap = ar->cap + extra_cap) < extra_cap)
		return (1);
	if (!(data = ft_realloc(ar->data,
		ar->cap * sizeof(void*), new_cap * sizeof(void*))))
		return (1);
	ar->data = data;
	ar->cap = new_cap;
	return (0);
}

int		ar_add(t_array *ar, void *new)
{
	if (!ar || !new)
		return (1);
	if (ar->len == ar->cap && ar_extend(ar, ar->cap))
		return (1);
	ar->data[ar->len++] = new;
	return (0);
}

void	ar_del(t_array *ar)
{
	size_t	i;

	i = 0;
	if (!ar)
		return ;
	if (ar->opt && AR_DEL)
		while (i < ar->len)
			AR_DEL(ar->data[i++]);
	free(ar->opt);
	free(ar->data);
	free(ar);
}
