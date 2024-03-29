/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:36:20 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/02 21:36:23 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: ft_strclr() sets every character of the string to the value '\0'
*/

void	ft_strclr(char *s)
{
	size_t		i;
	size_t		l;

	l = ft_strlen(s);
	i = 0;
	while (i < l)
		s[i++] = '\0';
}
