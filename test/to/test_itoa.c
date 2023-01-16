/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:07:20 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 23:16:23 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void helper(int n)
{
	char *res = ft_itoa(n);
	ft_putstr_fd(res, STDOUT_FILENO);
}

void	test_itoa(void)
{
	helper(10);
}
