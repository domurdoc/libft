#include "array.h"

t_ar_opt	*ar_opt(int (*cmp)(void*, void*), void (*swap)(void**, void**),
			void (*del)(void*))
{
	t_ar_opt	*new;

	if (!(new = malloc(sizeof(t_ar_opt))))
		return (NULL);
	new->cmp = cmp;
	new->swap = swap;
	new->del = del;
	return (new);	
}
