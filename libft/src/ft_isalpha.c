/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:48:47 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/02 21:44:07 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? (1) : (0));
}

static int		ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? (1) : (0));
}

int				ft_isalpha(int c)
{
	return ((ft_isupper(c) != 0 || ft_islower(c) != 0) ? (1) : (0));
}