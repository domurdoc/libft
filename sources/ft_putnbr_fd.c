/*
** DESCRIPTION
** The ft_putnbr_fd() function ouputs the integer n to the file descriptor fd.
**
** RETURN VALUE
** Nothing.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		buf[16];
	int			i;
	unsigned	f;

	i = 16;
	f = n;
	while ((int)(buf[--i] = f % 10 + '0') && f / 10 > 0)
			f /= 10;
	if (n < 0)
		buf[--i] = '-';
	write(fd, buf + i, 16 - i);
}
