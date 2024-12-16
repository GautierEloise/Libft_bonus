/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:35:09 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/12 15:55:04 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*big_start(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (0);
	str[0] = '\0';
	return (str);
}

static size_t	mini(size_t v1, size_t v2)
{
	if (v1 < v2)
		return (v1);
	return (v2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(s);
	if (start >= length)
		return (big_start());
	length -= start;
	len = mini(len, length);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	printf("%s", ft_substr("hola", 3, 2));
	return (0);
}*/
