/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:51:34 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 19:05:45 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void helper(const char *str, int c, 
	char *(*std)(const char *str, int c), char *(*ft)(const char *str, int c))
{
	char	*ft_ptr;
	char	*std_ptr;

	ft_ptr = (*ft)(str, c);
	std_ptr = (*std)(str, c);
	if ((ft_ptr && std_ptr) && 
		strcmp(ft_ptr, std_ptr) == 0)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else if (!ft_ptr && !std_ptr)
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
	helper("Hello World!", 'l', &strchr, &ft_strchr);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", 'd', &strchr, &ft_strchr);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", '\r', &strchr, &ft_strchr);
	helper("", 't', &strchr, &ft_strchr);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", 0, &strchr, &ft_strchr);
	helper("helo", 'h', &strchr, &ft_strchr);
	helper("lore ipsum", 'm', &strchr, &ft_strchr);
	helper("tripouille", ('t' + 256), &strchr, &ft_strchr);
	printf("\033[0m\n");
}

void test_strrchr(void)
{
	printf("ft_strrchr: ");
	helper("Hello World!", 'l', &strrchr, &ft_strrchr);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", 'd', &strrchr, &ft_strrchr);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", '\r', &strrchr, &ft_strrchr);
	helper("", 't', &strrchr, &ft_strrchr);
	helper("adsldjnaskdjnakljsdnfklasdfklasjdalje", 0, &strrchr, &ft_strrchr);
	helper("helo", 'h', &strrchr, &ft_strrchr);
	helper("lore ipsum", 'm', &strrchr, &ft_strrchr);
	printf("\033[0m\n");
}
