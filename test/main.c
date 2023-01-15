/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:36:07 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/15 12:33:11 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main(void)
{
	printf("########   glibc    Functions ########\n");
	test_strchr();
	test_strchr();
	test_strlen();
	test_strlcpy();
	test_strlcat();
	test_strncmp();
	test_strnstr();
	test_atoi();
	printf("######## Additional Functions ########\n");
	
	return (0);
}