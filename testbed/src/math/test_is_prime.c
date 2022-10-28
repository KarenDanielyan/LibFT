/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:17:05 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:20:50 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_math.h"

void	test_is_prime(void)
{
	printf("11 is prime?: %d\n", ft_is_prime(11));
	printf("1 is prime?: %d\n", ft_is_prime(1));
	printf("%d is prime?: %d\n", INT_MAX, ft_is_prime(INT_MAX));
	printf("-42 is prime?: %d\n", ft_is_prime(-42));
}