/*
** DESCRIPTION
** The ft_isascii() function checks whether c is a 7-bit unsigned char value
** that fits into the ASCII character set.
**
** RETURN VALUE
** The ft_isascii() function returns a non zero value if the character c fits
** ASCII, and zero if not.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
