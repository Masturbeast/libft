/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:28:11 by atep              #+#    #+#             */
/*   Updated: 2018/12/12 17:24:39 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*strnew;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * len + 1);
	if (strnew == 0)
		return (0);
	while (i < len)
	{
		strnew[i] = s[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
