/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:11:08 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/17 18:54:15 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*last;
	t_list	*new;
	int		len;

	len = ft_lstsize(lst);
	new = malloc(sizeof(t_list) * len);
	if(!new)
		return (0);
	if (lst)
	{
		last = ft_lstlast(lst);
		while (lst != last)
		{
			ft_lstadd_back(&new, (*f)(lst->content));
			lst = lst->next;
		}
		(*f)(lst->content);
		return (new);
	}
	(*del)(new);
	return (0);
}
