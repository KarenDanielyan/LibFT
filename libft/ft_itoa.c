/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:22:37 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 23:22:45 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(unsigned int digits)
{
	int	i;

	i = 1;
	while (digits > 9)
	{
		digits /= 10;
		i ++;
	}
	return (i);
}
static void	fill_out(char *a, unsigned int digits, unsigned int size, unsigned char sign)
{
	char	*i;

	i = a + size + 1;
	if (sign)
	{
		*a = '-';
		size--;

	}
	while (size >= sign)
	{
		*i = '0' + digits % 10;
		digits /= 10;
		i ++;
	}
	*i = '\0';

}
/*
*	Reference: DNE
*
*	Description: Allocates (with malloc()) and returns a string
*	representing the integer received as an argument.
*
*	Return Value: The string representing the integer.
*	NULL if the allocation fails.
*/
char	*ft_itoa(int n)
{
	unsigned int	digits;
	unsigned int	size;
	unsigned char	sign;
	char			*a;

	size = 0;
	sign = 0;
	digits = n;
	if (n < 0)
	{
		digits = -1 * n;
		sign = 1;
		size++;
	}
	size += count_digits(digits);
	a = (char *)malloc ((size + 1) * sizeof(char));
	if (!a)
		return (NULL);
	fill_out(a, digits, size, sign);
	return (a);
}
