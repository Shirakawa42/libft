#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	i = 0;
	s1 = (unsigned char*)malloc(sizeof(unsigned char) *
		(ft_strlen(s1) + 1));
	while(s1[i] && i < n && s1[i] != (unsigned char)c)
	{
		s2[i] = s1[i];
		if (s1[i] == (unsigned char)c)
			return (s2 + i + 1);
		i++;
	}
	return(NULL);
}
