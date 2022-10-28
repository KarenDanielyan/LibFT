/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:14:30 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:31:12 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;
	int		j;
	long	curr;

	i = 0;
	j = nb;
	curr = nb / 2;
	while (i <= j)
	{
		if (curr * curr > (long)nb)
			j = curr - 1;
		else if (curr * curr < (long)nb)
			i = curr + 1;
		else
			return (curr);
		curr = i + (j - i) / 2;
	}
	return (0);
}
