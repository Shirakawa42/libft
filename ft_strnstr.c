#include "libft.h"

char	*ft_strnstr(const char *meule, const char *aiguille, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	while (*meule && i < n)
	{
		if (*meule == *aiguille)
		{
			s1 = (char*)meule;
			s2 = (char*)aiguille;
			while (*s1 && *s2 && *s1 == *s2 && i < n)
			{
				*s1++;
				*s2++;
				i++;
			}
			if (*s2 == '\0')
				return ((char*)meule);
		}
		*meule++;
		i++;
	}
	return (NULL);
}
