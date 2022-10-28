/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fibonacci.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:16:46 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 20:55:51 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_math.h"

void	test_fibonacci(void)
{
	printf("Index 3: %d\n", ft_fibonacci(3));
    printf("Index 6: %d\n", ft_fibonacci(6));
    printf("Index 8: %d\n", ft_fibonacci(8));
    printf("Index -4: %d\n", ft_fibonacci(-4));
}