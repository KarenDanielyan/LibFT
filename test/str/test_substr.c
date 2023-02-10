/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 02:48:19 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 11:58:52 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	helper(char const *s, unsigned int start, size_t len, char const *std)
{
	if (strcmp(ft_substr(s, start, len), std) == 0)
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

void	test_substr()
{
	printf("ft_substr: ");
	helper("Hello World", 3, 5, "lo Wo");
    helper("Hello World", 0, 5, "Hello");
    helper("Hello World", 7, 10, "orld");
    helper("Hello World", 0, strlen("Hello World"), "Hello World");
    helper("Hello World", 5, 0, "");
	printf("\033[0m\n");
}
