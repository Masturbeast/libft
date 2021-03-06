/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:29:14 by atep              #+#    #+#             */
/*   Updated: 2018/12/12 21:51:40 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strnew = (char *)malloc(sizeof(char) * (len1 + len2));
	if (strnew == 0)
		return (NULL);
	ft_strcpy(strnew, s1);
	ft_strcat(strnew, s2);
	return (strnew);
}
