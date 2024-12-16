/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:10:58 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 18:55:48 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	s = (void *)str;
}

/*
int	main(void)
{
	char	tab[20] = "0AAAAAAAAAA";

	ft_bzero(tab, 5);
	printf("%s\n", tab);
	return (0);
}*/
