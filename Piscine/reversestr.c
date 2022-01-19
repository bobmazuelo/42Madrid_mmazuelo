#include <stdio.h>

int	ft_strlen(char *str)
{
	if (*str == 0)
		return (0);
	else
		return (1 + strlen(str + 1));
}

/////////////////////////////////////////////////////////////////

char	*ft_strrev(char *str)
{
	char	*i;
	char	*j;

	i = str;
	j = i + ft_strlen(i) - 1;

	while(i < j)
	{
		*i = *j ^ *i;
		*j = *i ^ *j;
		*i = *j ^ *i;
		i++; j--;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc < 0)
		return (0);
	ft_strrev(argv[1]);
	printf("%s\n", argv[1]);
}
