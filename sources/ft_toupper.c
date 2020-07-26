/*
** DESCRIPTION
** The ft_toupper() function converts lowercase letters to uppercase.
**
** RETURN VALUE
** The ft_toupper() function returns an uppercase equivalent if c is a lowercase
** letter. Otherwise it returns c.
**
** COMMENT
** Only C locale.
*/

int	ft_toupper(int c)
{
	return (c >= 'a' && c <= 'z' ? c - 32 : c);
}
