/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:00:14 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/18 18:25:30 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	last = ft_lstlast(*lst);
	printf("1 : last->content : %s$\n", (char *)last->content);
	while (last != *lst)
	{
		ft_lstdelone(last, del);
		last = ft_lstlast(*lst);
		printf("2 : last->content : %s$\n", (char *)last->content);
	}
	ft_lstdelone(last, del);
}

int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = (char *)malloc(sizeof(char) * 2);
	str2 = (char *)malloc(sizeof(char) * 2);
	str3 = (char *)malloc(sizeof(char) * 2);
	str1[0] = '1';
	str2[0] = '2';
	str3[0] = '3';
	str1[1] = 0;
	str2[1] = 0;
	str3[1] = 0;
	first = ft_lstnew(str1);
	second = ft_lstnew(str2);
	third = ft_lstnew(str3);
	ft_lstadd_back(&first, second);
	ft_lstadd_back(&first, third);
	ft_lstclear(&first, free);
	printf("%p$\n", (void *)first);
	return (0);
}
