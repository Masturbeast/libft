/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:49:39 by atep              #+#    #+#             */
/*   Updated: 2018/11/13 19:54:14 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *t;

	t = dest;
	if (n == 0)
		return (0);
	while (n--)
	{
		*t++ = *(const char *)src++;
		if (*(const char *)src == c)
		{	
			*t++ = *(const char *)src++;
			return (dest);
		}
	}
	return (dest);
}
