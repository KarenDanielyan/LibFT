/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:17:42 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 16:59:48 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_string	ft_strcpy(t_string dest, t_string src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}