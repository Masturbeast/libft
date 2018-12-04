#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	n;
	size_t	l;
	char	*res;

	n = 0;
	if (!s)
		return (NULL);
	while (ft_iswhitespace(s[n]))
		n++;
	if (!s[n])
		return (ft_strnew(0));
	l = ft_strlen(s);
	while (ft_iswhitespace(s[l - 1]))
		l--;
	if (!(res = ft_strsub(s, n, l - n)))
		return (NULL);
	return (res);
}
