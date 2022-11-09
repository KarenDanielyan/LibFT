/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:00:48 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 22:05:17 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_put.h"

void	test_putendl_fd(void)
{
    printf("TESTING PUTENDL_FD\n");
    fflush(stdout);
	char *str = "Hello World!!";
	ft_putendl_fd(str, STDOUT_FILENO);
    printf("\n");
}