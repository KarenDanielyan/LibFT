/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:56:24 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 22:06:05 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

static void	helper(int n, char *base)
{
	printf("ft_putstr_base(%d, \"%s\"): ", n, base);
	fflush(stdout);
	ft_putnbr_base(n, base);
	printf("\n");
}

void	test_putnbr_base(void)
{
	printf("TESTING PUTNBR_BASE\n");
	helper(0, "abc");
	helper(0, "+abc");
	helper(0, "abc-");
	helper(0, "acbb");
	helper(1100483647, "0123456789");
	helper(-923423, "ab");
	helper(-2147483648, "0123456789abcdef");
	helper(-1234, "01234567");
	helper(-1234122, "helo");
	helper(16434824, "abcdefgh");
	printf("\n");
}