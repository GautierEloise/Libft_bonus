/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <elgautie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:28:41 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/06 15:19:53 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(int n)
{
	int	l;

	l = 1;
	if (n < 0)
		l++;
	while (n >= 10 || n <= -10)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

static char	*alt(int n, char *nbr)
{
	int		l;

	l = 10;
	nbr[0] = '-';
	n++;
	n = -n;
	nbr[l] = (n % 10) + '1';
	n = n / 10;
	l--;
	while (n >= 10 || n <= -10)
	{
		nbr[l] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	nbr[l] = n + '0';
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		l;

	l = len_int(n);
	nbr = (char *)malloc(sizeof(char) * (l + 1));
	if (!nbr)
		return (0);
	nbr[l] = 0;
	l--;
	if (n == -2147483648)
		return (alt(n, nbr));
	if (n < 0)
	{
		nbr[0] = '-';
		n = -n;
	}
	while (n >= 10 || n <= -10)
	{
		nbr[l--] = (n % 10) + '0';
		n = n / 10;
	}
	nbr[l] = n + '0';
	return (nbr);
}

/*
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}*/
