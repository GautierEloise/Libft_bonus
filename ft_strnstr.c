/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:57:20 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:05:45 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (little[j] == big[i + j] && little[j]
			&& big[i + j] && (i + j) < len)
			j++;
		if (little[j] == 0)
			return ((char *)&big[i]);
		j = 0;
		i++;
	}
	return (0);
}

/*
int	main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	printf("og : %s, ", strnstr(haystack, needle, -1));
	printf("mine :%s\n",  ft_strnstr(haystack, needle, -1));
	printf("og : %s, ", strnstr(haystack, "abcd", 9));
	printf("mine : %s\n", ft_strnstr(haystack, "abcd", 9));
	return (0);
}*/
