/*
** DESCRIPTION
** The ft_putchar_fd() function ouputs the character c to the file descriptor
** fd.
**
** RETURN VALUE
** Nothing.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
