/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:54:53 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/17 14:07:33 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*new;
	t_list	*first;
	t_list	*second;

	new = ft_lstnew("0");
	first = ft_lstnew("1");
	second = ft_lstnew("2"); 
	first->next = second;
	printf("%s$\n", (char *)first->next->content);
	ft_lstadd_front(&first, new);
	printf("%s$", (char *)new->next->content);
	printf("%s$", (char *)new->next->next->content);
	
	return (0);
}*/
