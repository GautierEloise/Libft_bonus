/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:18:18 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:05:02 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	l;

	l = (unsigned int)ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	str[l] = 0;
	if (!l)
		return (str);
	l--;
	while (l > 0)
	{
		str[l] = (*f)(l, s[l]);
		l--;
	}
	str[l] = (*f)(l, s[l]);
	return (str);
}

/*
char	test(unsigned int i, char c)
{
	if (i % 2 == 0 && (c >= 97 && c <= 122))
		return (c - 32);
	if (i % 2 == 1 && (c >= 65 && c <= 90))
		return (c + 32);
	return (c);
}

int	main(void)
{
	printf("%s", ft_strmapi("", test));
	return (0);
}*/
