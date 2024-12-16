/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:15:24 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:04:18 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	if (siz)
	{
		while (src[i] && i < siz - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char	src1[4] = "test";
	char	src2[4] = "test";
	char	dest1[4] = "deux";
	char	dest2[6] = "deux";

	printf("len : %zu\n", strlen(dest1));
	printf("retour : %zu\ndest1 : %s", strlcpy(dest1, src1, 6), dest1);
	return (0);
}*/
