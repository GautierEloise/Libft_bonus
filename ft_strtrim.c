/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:12:05 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/12 15:57:29 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*empty_str(void)
{
	char	*s2;

	s2 = (char *)malloc(sizeof(char));
	if (!s2)
		return (0);
	*s2 = 0;
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		c;
	int		len;

	i = 0;
	c = 0;
	len = ft_strlen(s1) - 1;
	while (char_in(s1[i], set))
		i++;
	if (i == len + 1)
		return (empty_str());
	while (char_in(s1[len], set))
		len--;
	s2 = (char *)malloc(sizeof(char) * (len - i + 2));
	if (!s2)
		return (0);
	s2[len - i + 1] = 0;
	while (i <= len)
	{
		s2[c] = s1[i];
		c++;
		i++;
	}
	return (s2);
}

/*
int	main(void)
{
	printf("attendu :\n\"\"\n");
	printf("résultat:\n\"%s\"", ft_strtrim("  \t \t \n   \n\n\n\t", " \t\n"));
	return(0);
}*/
