/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:31:10 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:06:07 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;
	int	boolean;

	i = 0;
	last = 0;
	boolean = 0;
	while (c > 127)
		c -= 128;
	while (*s)
	{
		if (*s == c)
		{
			boolean = 1;
			last = i;
		}
		s++;
		i++;
	}
	if (*s == c)
		return ((char *)s);
	if (boolean)
		return ((char *)s - i + last);
	return (0);
}

/*
int	main(void)
{
	printf("%s", ft_strrchr("tes td td dfjsdjt gfhde", 't'));
	return (0);
}*/
