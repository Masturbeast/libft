/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 20:31:38 by atep              #+#    #+#             */
/*   Updated: 2018/11/13 22:48:30 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*t;

	t = (char *)str;
	while (*t && *t != (char)c)
		t++;
	if (*t == (char)c)
		return ((char *)str);
	else
		return (NULL);
}
