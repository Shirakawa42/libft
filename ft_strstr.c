#include "libft.h"

char	*ft_strstr(const char *meule, const char *aiguille)
{
	char	*s1;
	char	*s2;

	while (*meule)
	{
		if (*meule == *aiguille)
		{
			s1 = (char*)meule;
			s2 = (char*)aiguille;
			while (*s1 && *s2 && *s1 == *s2)
			{
				*s1++;
				*s2++;
			}
			if (*s2 == '\0')
				return ((char*)meule);
		}
		*meule++;
	}
	return (NULL);
}
