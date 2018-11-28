/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:29:14 by atep              #+#    #+#             */
/*   Updated: 2018/11/28 15:30:44 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strnew;

	if (!s1 || !s2)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * ft_strnew(ft_strlen(s1) + ft_strlen(s2)))
		if (strnew == 0)
			return (NULL);
	ft_strcpy(strnew, s1);
	ft_strcat(strnew, s2);
	return (strnew);
}
