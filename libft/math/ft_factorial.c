/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:05:57 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:30:06 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mymath.h"

int	ft_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
