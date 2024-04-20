/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoao-de <cjoao-de@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:26:31 by cjoao-de          #+#    #+#             */
/*   Updated: 2023/10/18 00:30:08 by cjoao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new node.
The member variable 'content' is initialized with
the value of the parameter 'content'. The variable
'next' is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
