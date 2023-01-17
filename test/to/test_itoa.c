/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:07:20 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/17 17:32:25 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void helper(int n, const char *res_std)
{
	char *res_ft = ft_itoa(n);

	if (strcmp(res_ft, res_std) == 0)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
}

void	test_itoa(void)
{
	printf("ft_itoa: ");
	helper(0, "0");
	helper(6, "6");
	helper(-9, "-9");
	helper(14, "14");
	helper(-141, "-141");
	helper(1200045, "1200045");
	helper(-32403032, "-32403032");
	helper(INT_MAX, "2147483647");
	helper(INT_MIN, "-2147483648");
	printf("\033[0m\n");
}
