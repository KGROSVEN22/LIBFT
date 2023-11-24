/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:45:19 by kgrosven          #+#    #+#             */
/*   Updated: 2023/11/17 10:28:36 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ch;
	unsigned char		*sh;
	size_t				i;

	ch = (unsigned char *)s1;
	sh = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ch[i] != sh[i])
			return (ch[i] - sh[i]);
		i++;
	}
	return (0);
}
