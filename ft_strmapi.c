/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:17:33 by atep              #+#    #+#             */
/*   Updated: 2018/11/28 15:23:29 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strnew;
	unsigned int 	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * ft_strnew(ft_strlen(s)));
	if (strnew == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		strnew[i] = (*f)(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);	
}
