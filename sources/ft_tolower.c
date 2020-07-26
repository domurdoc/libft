/*
** DESCRIPTION
** The ft_tolower() function converts uppercase letters to lowercase.
**
** RETURN VALUE
** The ft_tolower() function returns a lowercase equivalent if c is an uppercase
** letter. Otherwise it returns c.
**
** COMMENT
** Only C locale.
*/

int	ft_tolower(int c)
{
	return (c >= 'A' && c <= 'Z' ? c + 32 : c);
}
