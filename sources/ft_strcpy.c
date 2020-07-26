/*
** DESCRIPTION
** The ft_strcpy() function copies the string pointed to by src, including the
** terminating null byte ('\0'), to the buffer pointed to by dst which must be
** large enough to receive the copy.
**
** RETURN VALUE
** The ft_strcpy() function returns a pointer to the destination string dst.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	char	*d;

	d = dst;
	while ((*d++ = *src++))
		;
	return (dst);
}
