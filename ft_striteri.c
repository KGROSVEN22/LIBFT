/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:51:45 by kgrosven          #+#    #+#             */
/*   Updated: 2023/11/17 13:56:10 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	len;

	if (!s || !*s)
		return ;
	if (!f)
		return ;
	len = 0;
	while (s[len])
	{
		(*f)(len, &s[len]);
		len++;
	}
}
