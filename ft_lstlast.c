/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoao-de <cjoao-de@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:26:31 by cjoao-de          #+#    #+#             */
/*   Updated: 2023/10/18 01:23:39 by cjoao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns the last node of the list.
Parameters
lst: The beginning of the list.
Return value: Last node of the list
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst-> next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
