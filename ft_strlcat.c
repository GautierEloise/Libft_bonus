/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:11:31 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:14:28 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	mini(size_t s1, size_t s2)
{
	if (s1 < s2)
		return (s1);
	return (s2);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	i;

	lend = ft_strlen(dst);
	i = -1;
	if (size > lend)
	{
		while ((++i + lend) < size - 1 && src[i])
			dst[(int)lend + (int)i] = src[(int)i];
		dst[(int)lend + (int)i] = 0;
	}
	return (ft_strlen(src) + mini(size, lend));
}

/*
int	main(void)
{
	char	dest[20] = "pqrs";
	char	src[20] = "abcdefghi";
	ft_strlcat(dest, src, 12);
	return (0);
}*/
