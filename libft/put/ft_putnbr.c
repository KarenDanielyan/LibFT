/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:03:32 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 20:46:09 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

void	ft_putnbr(int nbr)
{
	unsigned int	temp;
	char			buf;

	temp = nbr;
	if (nbr < 0)
	{
		temp = (unsigned int)(-1 * nbr);
		write(STDOUT_FILENO, "-", 1);
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
	else
	{
		buf = '0' + temp;
		write(STDOUT_FILENO, &buf, 1);
	}
}
