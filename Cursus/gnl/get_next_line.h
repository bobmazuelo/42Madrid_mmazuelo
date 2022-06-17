#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);

void	ft_bzero(void *b, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
#endif
