/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoao-de <cjoao-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:26:31 by cjoao-de          #+#    #+#             */
/*   Updated: 2023/10/19 13:12:11 by cjoao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst: The node to free.
del: The address of the function used to delete the content.
Takes as a parameter a node and frees the memory of the node's content
using the function 'del' given as a parameter and free the node.
The memory of 'next' must not be freed.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}
