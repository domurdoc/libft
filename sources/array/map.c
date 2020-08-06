#include "array.h"

t_array	*ar_map(t_array *ar, void *(*func)(void*), t_ar_opt *new_opt)
{
	t_array		*new_ar;

	if (!ar || !func)
		return (NULL);
	if (!(new_ar = ar_new(ar->cap)))
		return (NULL);
	new_ar->len = 0;
	new_ar->opt = new_opt;
	while (new_ar->len < ar->len)
	{
		if (!(new_ar->data[new_ar->len] = func(ar->data[new_ar->len])))
		{
			ar_del(new_ar);
			return (NULL);
		}
		new_ar->len++;
	}
	return (new_ar);
}
