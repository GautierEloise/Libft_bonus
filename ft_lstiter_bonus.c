/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elgautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:20:24 by elgautie          #+#    #+#             */
/*   Updated: 2024/12/17 18:38:41 by elgautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*last;

	if (lst)
	{
		last = ft_lstlast(lst);
		while (lst != last)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
		(*f)(lst->content);
	}
}
