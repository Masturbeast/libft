/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:28:11 by atep              #+#    #+#             */
/*   Updated: 2018/11/28 15:28:59 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*strnew;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * ft_strnew(len));
		if (strnew == 0)
			return (NULL);
	while (i < len)
	{
		strnew[i] = s[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
