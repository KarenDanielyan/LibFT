/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:38:19 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 18:11:06 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_string	ft_strncpy(t_string dest, t_string src, u32 size)
{
	u32	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < size)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}