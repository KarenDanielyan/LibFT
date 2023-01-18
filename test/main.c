/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:36:07 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 15:14:53 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	test_lstmap();
	printf("\n\n########   glibc    Functions ########\n");
	test_strchr();
	test_strlen();
	test_strlcpy();
	test_strlcat();
	test_strncmp();
	test_strnstr();
	test_strdup();
	test_atoi();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isprint();
	test_isascii();
	test_tolower();
	test_toupper();
	test_memset();
	test_memcmp();
	printf("######## Additional Functions ########\n");
	test_split();
	test_itoa();
	test_strtrim();
	test_substr();
	return (0);
}
