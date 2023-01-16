/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:26:32 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 15:17:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	helper(void)
{
	char	*std_str;
	char	*ft_str;

	std_str = strdup("If you see this text, then ft_strdup function works!\n");
	ft_str = ft_strdup("If you see this text, then ft_strdup function works!\n");
	if (strcmp(std_str, ft_str) == 0)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");		
	}
	free(std_str);
	free(ft_str);
}

void	test_strdup(void)
{
	printf("ft_strdup: ");
	helper();
	printf("\033[0m\n");
}
