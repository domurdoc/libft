/*
** DESCRIPTION
** The ft_isdigit() function checks c for a digit (0 through 9).
**
** RETURN VALUE
** The ft_isdigit() function returns a non zero value if the character c is a
** digit character, and zero if not.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
