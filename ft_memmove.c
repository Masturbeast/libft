/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:54:38 by atep              #+#    #+#             */
/*   Updated: 2018/11/21 15:43:10 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*t;
	char *p;
	size_t i;

	i = 0;
	p = dest;
	t = src;
	while (n--)
	{
		p[i] = t[i];
		i++;
	}
	return (dest);
}
