/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:09:34 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 16:17:34 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

void	test_putendl(void)
{
	printf("TESTING PUTENDL\n");
	fflush(stdout);
	char *str = "Hello World!!";
	ft_putendl(str);
	printf("\n");
}