/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:46:35 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 12:29:10 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void helper(const char *str, const char *set, const char *res)
{
	char *trim = ft_strtrim(str,set);
	if (strcmp(trim, res) == 0)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
	free(trim);
}

void	test_strtrim(void)
{
	char	*set = "\t \n\r";
	printf("ft_strtrim: ");
	helper("\t\n Hello World!\t \r \n", set, "Hello World!");
	if (ft_strtrim("                ", set))
		{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
	printf("\033[0m\n");
}
