/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:05:29 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/05 00:09:47 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_string	ft_strdup(t_string src)
{
	t_string	dup;

	dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	dup = ft_strcpy(dup, src);
	return (dup);
}
