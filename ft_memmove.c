#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*str;

	if (!src || !dest)
		return (NULL);
	str = (unsigned char*)malloc(sizeof(*str) * len);
	ft_memcpy(str, src, len);
	ft_memcpy(dest, str, len);
	free(str);
	return (dest);
}
