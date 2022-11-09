/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:35:58 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 21:14:16 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

void	test_putstr(void)
{
	printf("TESTING PUTSTR\n");
	fflush(stdout);
	char *str = "Hello World\n";
	ft_putstr(str);
	printf("\n");
}