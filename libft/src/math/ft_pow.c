/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:14:35 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:30:24 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int nb, int pow)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (pow--)
	{
		res *= nb;
	}
	return (res);
}
