/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:03:47 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 23:13:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"

void	ft_putendl(char *str)
{
	while (*str)
		write(STDOUT_FILENO, str++, 1);
	write(STDOUT_FILENO, "\n", 1);
}
