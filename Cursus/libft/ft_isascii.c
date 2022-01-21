int	ft_isascii(char c)
{
	if (c >= 0 && c <= 128)
		return (1);
	else
		return (0);
}
