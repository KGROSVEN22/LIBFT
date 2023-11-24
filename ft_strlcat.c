/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:52:30 by kgrosven          #+#    #+#             */
/*   Updated: 2023/11/16 15:15:32 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	res;
	size_t	len_src;
	size_t	i;

	src = (char *)src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen((char *) src);
	res = 0;
	i = 0;
	if (size > len_dest)
		res = len_src + len_dest;
	else
		return (len_src + size);
	while (src[i] && (len_dest + 1) < size)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}
