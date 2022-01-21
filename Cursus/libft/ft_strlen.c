size_t	ft_strlen(char *str)
{
	char	*ptr;
	
	ptr = str;
	while (*ptr != '\0')
		ptr++;
	return (ptr - str);
}
