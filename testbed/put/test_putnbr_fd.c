/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:07:55 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 22:09:21 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

static void	helper(int n)
{
	printf("ft_putstr(\"%d\"): ", n);
	fflush(stdout);
	ft_putnbr_fd(n, STDOUT_FILENO);
	printf("\n");
}

void	test_putnbr_fd(void)
{
	printf("TESTING PUTNBR_FD\n");
	helper(0);
	helper(INT_MAX);
	helper(INT_MIN);
	helper(2141248);
	helper(-120023);
	printf("\n");
}