/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:40:30 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 18:58:45 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (dest || src)
	{
		d = (char *)dest;
		s = (char *)src;
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	return (dest);
}
