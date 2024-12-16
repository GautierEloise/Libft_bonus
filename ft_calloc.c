/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:11:41 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/14 15:36:38 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size)
	{
		if (nmemb > __SIZE_MAX__ / size)
			return (0);
	}
	p = malloc(nmemb * size);
	if (!p)
		return (p);
	ft_bzero(p, nmemb * size);
	return (p);
}

/*
int	main(void)
{
	char *str;

	str = (char *)calloc(12, sizeof(char));
	return (0);
}*/
