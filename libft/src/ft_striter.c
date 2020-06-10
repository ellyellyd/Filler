/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:34:46 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/02 21:35:23 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description: ft_striter() applies the function f to each character
** of the string passed as argument. Each character is passed by address
** to f to be modified if necessary.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(s + i);
		i++;
	}
}
