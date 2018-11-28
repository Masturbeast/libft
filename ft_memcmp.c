/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:50:10 by atep              #+#    #+#             */
/*   Updated: 2018/11/13 20:21:55 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n--)
	{
		if (*(const char *)str1 != *(const char *)str2)
			return (*(const char *)str1 - *(const char *)str2);
		str1++;
		str2++;
	}
	return (0);
}
