/*
** DESCRIPTION
** The ft_islower() function checks for a lowercase letter.
**
** RETURN VALUE
** The ft_islower() function returns a non zero value if the character c is a
** lowercase letter, and zero if not.
**
** COMMENT
** Only C locale.
*/

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
