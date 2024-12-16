/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:13:54 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:27:48 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = -1;
	len = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	while (++i < len)
		s2[i] = s[i];
	s2[i] = 0;
	return (s2);
}

/*
int	main(void)
{
	printf("%s", ft_strdup("test"));
	return (0);
}*/
