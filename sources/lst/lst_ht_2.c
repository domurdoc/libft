#include "lst.h"

/*
** The lst_ht_clear() function uses lst_del() function to delete the list and
** sets tail-pointer to NULL.
*/

void		lst_ht_clear(t_lst_ht *x, void (*del)(void*))
{
	if (x)
	{
		x->len = 0;
		lst_del(&x->head, del);
		x->tail = NULL;
	}
}
