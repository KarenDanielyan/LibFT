/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:28:21 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/15 13:01:40 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	helper(char *s1, char *s2, size_t size)
{
	char	*ft_found;
	char	*bsd_found;

	ft_found = ft_strnstr(s1, s2, size);
	bsd_found = strnstr(s1, s2, size);
	if (ft_found == bsd_found)
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

void	test_strnstr(void)
{
	printf("ft_strnstr: ");
	helper("ABC", "B", 3);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", "djnak", 5);
	helper("klajsndlkajs", "", 6);
	helper("","helo", 4);
	helper("klajsndlkajs", "1", 12);
	helper("lorem ipsum dolor sit amet", "dolor", 15);
	printf("\033[0m\n");
}