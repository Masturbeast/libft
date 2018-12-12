/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:52:55 by atep              #+#    #+#             */
/*   Updated: 2018/12/06 15:07:33 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char	const *s, char (*f)(char))
{
	char	*strnew;
	int		i;
	int		slen;

	slen = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * slen + 1);
	if (!s)
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			strnew[i] = (*f)(s[i]);
			i++;
		}
	}
	strnew[i] = '\0';
	return (strnew);
}
