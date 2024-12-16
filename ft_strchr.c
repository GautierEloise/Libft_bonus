/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:37:31 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:01:22 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (c > 127)
		c -= 128;
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	else
		return (0);
}
/*
	char	*str;

	str = (char *)s;
	while (*str != 0 || *str != (char)c)
		str++;
	if (*str == c)
		return (str);
	return (0);
}

int	main(void)
{
	char s[] = "tripouille";
	printf("og : %s, mine : %s", strchr(s, 't' + 256), ft_strchr(s, 't' + 256));
	return (0);
}*/
