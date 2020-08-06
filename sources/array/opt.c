#include "array.h"

t_ar_opt	*ar_opt(int (*cmp)(void*, void*), void (*swap)(void**, void**))
{
	t_ar_opt	*new;

	if (!(new = malloc(sizeof(t_ar_opt))))
		return (NULL);
	new->cmp = cmp;
	new->swap = swap;
	return (new);	
}
