/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:26:40 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/14 23:23:29 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define TESTCOUNT 5

static void initialize(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		*(str + i) = 0x7f;
		i++;
	}
}

static char *string_gen(size_t size)
{
	char		*str;
	size_t		i;

	str = (char *)malloc(size);
	i = 0;
	srand(time(NULL));
	while (i < size - 1)
	{
		*(str + i) = (rand() % 95) + 32;
		i ++;
	}
	*(str + i) = '\0';

	return (str);
}

static const char *helper(const char *str, size_t size)
{
	short	cond;
	char	*ftstr;
	char	*bsdstr;
	size_t	ft_ret;
	size_t	bsd_ret;

	cond = 0;
	ftstr = malloc(100);
	bsdstr = malloc(100);
	initialize(ftstr, 100);
	initialize(bsdstr, 100);
	ft_ret = ft_strlcpy(ftstr, str, size);
	bsd_ret = strlcpy(bsdstr, str, size);
	cond = (short)((strcmp(ftstr, bsdstr) == 0) && (ft_ret == bsd_ret));
	free(bsdstr);
	free(ftstr);
	if (cond)
		return (NULL);
	else
		return (str);
}

static void specific_cases(void)
{
	char	ft_str[100];
	size_t	ft_len;

	initialize(ft_str, 100);
	ft_len = ft_strlcpy(ft_str, "If you see this text, then ft_strlcpy function works :)\n", 100);
	if (helper("If you see this text, then ft_strlcpy function works :)\n", 100) == NULL 
		&& (ft_str[56] == '\0' && ft_str[57] != '\0'))
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");		
	}
	ft_len = ft_strlcpy(ft_str, "Hello World!", 5);
	if (helper("Hello World!", 5) == NULL && (ft_str[4] == '\0' && ft_str[5] != '\0'))
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");		
	}
	ft_len = ft_strlcpy(ft_str, "testing that null absent", 0);
	if (helper("testing that null absent", 0) == NULL && ft_str[0] != '\0')
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");		
	}
	(void)ft_len;
}

void test_strlcpy(void)
{
	const char	**fail_case;
	int		i;
	size_t size;
	
	i = 0;
	size = 0;
	/* Generated Tests */
	srand(time(NULL));
	fail_case = (const char **)malloc(TESTCOUNT * sizeof(const char *));
	printf("ft_strlcpy: ");
	while (i < TESTCOUNT)
	{
		size = (size_t)((rand() % 20) + 2);
		*(fail_case + i) = helper(string_gen(size), size);
		if (*(fail_case + i))
		{
			printf("\033[1;31m");
			printf("[KO] ");
		}
		else
		{
			printf("\033[1;32m");
			printf("[OK] ");
		}
		i ++;
	}
	specific_cases();
	printf("\033[0m\n");
	i = 0;
	while (i < TESTCOUNT)
	{
		if (*(fail_case + i))
		{
			printf("Failed test number %d, Test string: %s\n", (i + 1), *(fail_case + i));
		}
		free((void *)*(fail_case + i));
		i ++;
	}
	free(fail_case);
}