/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:32:01 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/14 18:17:09 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	helper(char *str)
{
	if (ft_strlen(str) == strlen(str))
	{
			printf("\033[1;32m");
			printf("[OK] ");
	}
	else
	{
			printf("\033[1;31m");
			printf("[KO] ");
	}
	printf("\033[0m");
}

void	test_strlen(void)
{
	printf("ft_strlen: ");
	helper("");
	helper("akskdkfjc435");
	helper("123556df\0sdfkjsdkf");
	printf("\n");
}