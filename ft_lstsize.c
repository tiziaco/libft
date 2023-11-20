/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:20:15 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/20 14:26:41 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*ptr;

	size = 0;
	if (!lst)
		return (size);
	ptr = lst;
	while (!ptr)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
