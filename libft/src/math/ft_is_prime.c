/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:14:47 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:32:26 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mymath.h"

t_bool	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (FALSE);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
