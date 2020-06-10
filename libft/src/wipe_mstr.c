/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wipe_mstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <fcatina@google.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 03:44:38 by fcatina           #+#    #+#             */
/*   Updated: 2020/03/03 23:00:22 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	wipe_mstr(char **m)
{
	int		i;

	i = 0;
	while (m[i])
	{
		ft_strdel(m + i);
		i++;
	}
	free(m);
	m = NULL;
}