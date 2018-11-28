/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:57:35 by atep              #+#    #+#             */
/*   Updated: 2018/11/21 16:30:56 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void new;

	new = (void*)malloc(sizeof(char) * size)
	if (new == 0)
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
