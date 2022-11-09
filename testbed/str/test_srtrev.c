/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_srtrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:39:08 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/05 00:05:13 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TEST_MESSAGE "Hello World!!!"

#include "test_str.h"

void	test_strrev(void)
{
	printf("ft_putstr: ");
	fflush(stdout);
	ft_putstr(TEST_MESSAGE);
	printf("\nft_strrev: ");
	fflush(stdout);
	ft_putstr(ft_strrev(TEST_MESSAGE));
}