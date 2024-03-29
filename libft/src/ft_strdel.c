/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:36:04 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/02 21:41:03 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: ft_strdel() takes as a parameter the address of a memory area
** that needs to be freed with free (3), then puts the pointer to NULL.
*/

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
