/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:09:36 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 22:16:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

void	test_putstr_fd(void)
{
	printf("TESTING PUTSTR_FD\n");
	fflush(stdout);
	char *str = "Hello World\n";
	ft_putstr_fd(str, STDOUT_FILENO);
	printf("\n");
}