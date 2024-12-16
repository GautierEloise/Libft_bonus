/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:31:22 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/04 19:02:16 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = (unsigned int)ft_strlen(s);
	while (i < l)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}

/*
int	main(void)
{
	return (0);
}*/
