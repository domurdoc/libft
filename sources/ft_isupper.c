/*
** DESCRIPTION
** The ft_isupper() function checks for an uppercase letter.
**
** RETURN VALUE
** The ft_isupper() function returns a non zero value if the character c is an
** uppercase letter, and zero if not.
**
** COMMENT
** Only C locale.
*/

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
