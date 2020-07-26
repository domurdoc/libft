/*
** DESCRIPTION
** The ft_isprint() function checks for any printable character including space.
**
** RETURN VALUE
** The ft_isprint() function returns a non zero value if the character c is
** printable, and zero if not.
*/

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
