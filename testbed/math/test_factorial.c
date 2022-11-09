/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_factorial.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:16:26 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 20:44:28 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_math.h"

void	test_factorial(void)
{
	printf("4!: %d\n", ft_factorial(4));
	printf("10!: %d\n", ft_factorial(10));
	printf("0!: %d\n", ft_factorial(0));
	printf("-23!: %d\n", ft_factorial(-23));
}