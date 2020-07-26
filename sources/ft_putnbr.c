/*
** DESCRIPTION
** The ft_putnbr() function ouputs the integer n to the standard output.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** The ft_putnbr() is ft_putnbr_fd() with fd equal to 1.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
