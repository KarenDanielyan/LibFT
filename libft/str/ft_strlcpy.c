/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:49:21 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 18:13:11 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

u32	ft_strlcpy(t_string dest, t_string src, u32 size)
{
	u32	i;

	i = 0;
	if (size)
	{
		while ((i < size - 1) && *(src + i))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return ((u32)ft_strlen(src));
}