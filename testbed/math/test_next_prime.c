/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_next_prime.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:17:33 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:26:31 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_math.h"

void	test_next_prime(void)
{
	printf("10 next prime: %d\n", ft_next_prime(10));
    printf("%d next prime: %d\n", (INT_MAX - 2), ft_next_prime(INT_MAX - 2));
    printf("-4 next prime: %d\n", ft_next_prime(-4));
    printf("%ld next prime: %d\n", INT_MIN, ft_next_prime(INT_MIN));
}