#include <string.h>

void	ft_swap(void *a, void *b, size_t len)
{
	unsigned char	*a_;
	unsigned char	*b_;
	unsigned char	tmp;
	size_t			i;

	a_ = (unsigned char*)a;
	b_ = (unsigned char*)b;
	i = 0;
	while (i++ < len)
	{
		tmp = *a_;
		*a_++ = *b_;
		*b_++ = tmp;
	}
}

void	ft_swap_p(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
