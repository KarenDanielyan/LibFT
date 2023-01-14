/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:26:40 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/14 20:07:49 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define TESTCOUNT 5

void initialize(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		*(str + i) = 0x7f;
		i++;
	}
}

char *string_gen(void)
{
	return ("\0");
}

const char *helper(const char *str, size_t size)
{
	char	*ftstr;
	char	*bsdstr;
	size_t	ft_ret;
	size_t	bsd_ret;

	ftstr = malloc(100);
	bsdstr = malloc(100);
	initialize(ftstr, 100);
	initialize(bsdstr, 100);
	ft_ret = ft_strlcpy(ftstr, str, size);
	bsd_ret = strlcpy(bsdstr, str, size);
	if (strcmp(ftstr, bsdstr) == 0
		&& ft_ret == bsd_ret)
	{
		printf("\033[1;32m");
		printf("[OK] ");
		return (NULL);
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
		return (str);
	}
}

void test_strlcpy(void)
{
	const char	**fail_case;
	int		i;
	
	i = 4;
	fail_case = (const char **)malloc(TESTCOUNT * sizeof(const char *));
	printf("ft_strlcpy: ");
	while (i < TESTCOUNT)
	{
		*(fail_case + i) = helper("Hello World!", 5);
		i ++;
	}
	printf("\n");
	i = 0;
	while (i < TESTCOUNT)
	{
		if (*(fail_case + i))
		{
			printf("Failed test number %d, Test string: %s\n", i, *(fail_case + i));
		}
		i ++;
	}
}