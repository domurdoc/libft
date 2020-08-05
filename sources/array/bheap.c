#include "array.h"

void	bh_sift_down(t_array *bh, size_t i)
{
	size_t	left;
	size_t	right;
	size_t	lesser;

	while ((left = BH_LEFT(i)) < bh->len)
	{
		right = left + 1;
		lesser = left;
		if (right < bh->len && BH_CMP(bh->data[left], bh->data[right]) > 0)
			lesser = right;
		if (BH_CMP(bh->data[i], bh->data[lesser]) <= 0)
			break ;
		BH_SWAP(&bh->data[i], &bh->data[lesser]);
		lesser = i;
	}
}

void	bh_sift_up(t_array *bh, size_t i)
{
	size_t	parent;

	while (BH_CMP(bh->data[i], bh->data[(parent = BH_PARENT(i))]) < 0)
	{
		BH_SWAP(&bh->data[i], &bh->data[parent]);
		i = parent;
	}
}

int		bh_add(t_array *bh, void *new)
{
	if (ar_add(bh, new))
		return (1);
	bh_sift_up(bh, bh->len - 1);
	return (0);
}

void	*bh_extract(t_array *bh)
{
	void	*data;

	data = NULL;
	if (bh->len > 0)
	{
		data = bh->data[0];
		if (--bh->len > 0)
		{
			bh->data[0] = bh->data[bh->len];
			bh_sift_down(bh, 0);
		}
	}
	return (data);
}
