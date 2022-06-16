#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);

void ft_char(char *dest, char *src);
#endif
