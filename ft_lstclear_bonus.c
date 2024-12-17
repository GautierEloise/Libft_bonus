/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:00:14 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/17 18:54:11 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	last = ft_lstlast(*lst);
	printf("last->content : %s$\n", (char *)last->content);
	while (last != *lst)
	{
		ft_lstdelone(last, del);
		last = ft_lstlast(*lst);
		printf("last->content : %s$\n", (char *)last->content);
	}
	ft_lstdelone(last, del);
}

/*
int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = ft_lstnew("1");
	second = ft_lstnew("2");
	third = ft_lstnew("3");
	ft_lstadd_back(&first, second);
	ft_lstadd_back(&first, third);
	ft_lstclear(&first, free);
	printf("%p$\n", (void *)first);
	return (0);
}*/
