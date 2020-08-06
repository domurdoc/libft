#include "array.h"

static uint32_t	ar_partition(t_array *ar, uint32_t l, uint32_t r)
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

void			ar_quicksort(t_array *ar, uint32_t l, uint32_t r)
{
	uint32_t	q;

	if (ar && l < r && r < ar->len)
	{
		q = ar_partition(ar, l, r);
		ar_quicksort(ar, l, q);
		ar_quicksort(ar, q + 1, r);
	}
}
