/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:45 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/08 16:58:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_string	ft_strndup(t_string src, u32 size)
{
	t_string	dup;

	dup = malloc((size + 1) * sizeof(char));
	dup = ft_strncpy(dup, src, size);
	return (dup);
}