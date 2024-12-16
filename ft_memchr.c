/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:35:40 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/11 20:03:38 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("og : %s\n", (char *)memchr(s, 2, 3));
	printf("mine : %s\n", (char *)ft_memchr(s, 2, 3));
	return (0);
}*/
