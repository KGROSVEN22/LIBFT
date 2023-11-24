/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:10:14 by kgrosven          #+#    #+#             */
/*   Updated: 2023/11/15 13:23:04 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_tolower(int ch)
{
	if ((ch >= 'A' ) && (ch <= 'Z' ))
		ch += 32;
	return (ch);
}
