/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:06:25 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/05 20:29:13 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = -1;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (++i < n)
			d[i] = s[i];
	}
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[20] = "str";
	//char	dest[20] = "oldstring";

	printf("%s", (char *)ft_memmove(src, src + 1, 2));
	return (0);
}*/
