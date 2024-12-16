/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:14:53 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 18:55:17 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	res;

	i = 0;
	signe = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res += (nptr[i] - '0');
		if (nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
			res *= 10;
		i++;
	}
	return (res * signe);
}

/*
int main()
{
	printf("%d\n", ft_atoi("2147483647"));
	return (0);
}*/
