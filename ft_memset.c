/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:27:31 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 18:59:12 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n && (s || str[i]))
	{
		str[i] = (char)c;
		i++;
		s++;
	}
	return (str);
}

/*
int	main(void)
{
	char *b1 = (char*)malloc(sizeof(char) * (0xF0000 + 1));
	char *b2 = (char*)malloc(sizeof(char) * (0xF0000 + 1));

	*b1 = 0;
	*b2 = 0;
	printf("%d\n", '\5');
	printf("%s\n", (char *)memset(b1, '\5', 0xF0000));
	printf("%s\n", (char *)ft_memset(b2, '\5', 0xF0000));
	return (0);
}

int	main(void)
{
	char	str[20] = "phrase de test";
	
	printf("%s", (char *)ft_memset(str, 'A', 4));
	return (0);
}*/
