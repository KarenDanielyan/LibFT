/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:20 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 21:54:05 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	unsigned int	temp;
	char			buf;

	temp = nbr;
	if (nbr < 0)
	{
		temp = (unsigned int)(-1 * nbr);
		write(fd, "-", 1);
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
	else
	{
		buf = '0' + temp;
		write(fd, &buf, 1);
	}
}
