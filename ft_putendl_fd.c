/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjoao-de <cjoao-de@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:47:17 by cjoao-de          #+#    #+#             */
/*   Updated: 2023/10/13 18:00:29 by cjoao-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//putstr_fd + newline.

void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
