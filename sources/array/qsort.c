#include "array.h"

static uint32_t	partition(t_array *ar, uint32_t l, uint32_t r)
{
	uint64_t	v;

	v = (l + r) / 2;
	while (l <= r)
	{
		while (AR_CMP(ar->data[l], ar->data[v]) < 0)
			l++;
		while (AR_CMP(ar->data[r], ar->data[v]) > 0)
			r--;
		if (l >= r)
			break ;
		AR_SWAP(&ar->data[l], &ar->data[l]);
		l++;
		r--;
	}
	return (r);
}

static void		quicksort(t_array *ar, uint32_t l, uint32_t r)
{
	uint32_t	q;

	if (l < r)
	{
		q = partition(ar, l, r);
		quicksort(ar, l, q);
		quicksort(ar, q + 1, r);
	}
}

int				ar_quicksort(t_array *ar)
{
	if (ar && ar->opt && AR_SWAP && AR_CMP)
	{
		quicksort(ar, 0, ar->len - 1);
		return (0);
	}
	return (1);
}
