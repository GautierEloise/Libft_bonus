/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:51:15 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:05:18 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}

int	main(void)
{
	char	*s1 = "atoms\0\0\0\0";
	char	*s2 = "atoms\0abc";

	printf("%d", ft_strncmp(s1, s2, 8));
	return (0);
}*/
