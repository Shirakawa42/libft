#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	i = 0;
	s2 = (unsigned char*)malloc(sizeof(unsigned char) *
		(ft_strlen(s1) + 1));
	while(s1[i] && i < n)
		s2[i] = s1[i++];
	return(dest);
}
