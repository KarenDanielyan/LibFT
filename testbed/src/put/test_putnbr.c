/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:19:31 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 20:31:23 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

void	helper(int n)
{
	printf("ft_putstr(\"%d\"): ", n);
	fflush(stdout);
	ft_putnbr(n);
	printf("\n");
}

void	test_putnbr(void)
{
	helper(0);
	helper(INT_MAX);
	helper(INT_MIN);
	helper(2141248);
	helper(-120023);
}