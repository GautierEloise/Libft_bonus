/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:22:01 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/12 15:29:03 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c, int boolean)
{
	int	i;
	int	w;
	int	l;

	i = 0;
	w = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] != c)
		{	
			l++;
			if (!s[i + 1] || s[i + 1] == c)
			{
				w++;
				if (boolean)
					return (l);
				l = 0;
			}
		}
		i++;
	}
	return (w);
}

static char	**free_tab(char	**tab, int nbr_malloc)
{
	int	i;

	i = 0;
	if (nbr_malloc == -1)
	{
		free(tab);
		return (0);
	}
	while (i <= nbr_malloc)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

static int	cpy(char **tab, char const *s, int i, int letters)
{
	int	j;

	j = -1;
	while (++j < letters)
		tab[i][j] = s[j];
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	int		letters;
	char	**tab;

	words = count(s, c, 0);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (free_tab(tab, -1));
	tab[words] = 0;
	i = -1;
	while (++i < words)
	{
		letters = count(s, c, 1);
		tab[i] = (char *)malloc(sizeof(char) * (letters + 1));
		if (!tab[i])
			return (free_tab(tab, i));
		tab[i][letters] = 0;
		while (*s == c)
			s++;
		s += cpy(tab, s, i, letters);
	}
	return (tab);
}

/*
int	main(void)
{
	int		i;
	char 	**tab;

	i = 0;
	tab = ft_split("   hello test   ", ' ');
	while (tab[i])
	{
		printf("%s$\n", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
