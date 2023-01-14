/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:51:34 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/15 00:01:18 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void helper(const char *str, int c)
{
	char	*ft_ptr;
	char	*glib_ptr;

	ft_ptr = ft_strchr(str, c);
	glib_ptr = strchr(str, c);
	if (strcmp(ft_ptr, glib_ptr) == 0)
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

void test_strchr(void)
{
	printf("ft_strchr: ");
	helper("Hello World!", 'l');
	printf("\033[0m\n");
}