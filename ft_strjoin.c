/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 16:50:07 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/15 15:20:49 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l_s1;
	size_t	l_s2;
	size_t	i;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (l_s1 + l_s2 + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < l_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (l_s1 + l_s2))
	{
		str[i] = s2[i - l_s1];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*
int	main(void)
{
	printf("%s", ft_strjoin("abcd", "efghi"));
	return (0);
}*/
