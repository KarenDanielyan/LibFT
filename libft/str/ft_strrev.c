/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:22:53 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/05 00:05:20 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_string	ft_strrev(t_string str)
{
	t_string dup = ft_strdup(str);
	char	temp;
	char	*l;
	char	*r;
	
	l = dup;
	r = dup + ft_strlen(dup) - 1;
	while (l < r)
	{
		temp = *l;
		*l = *r;
		*r = temp;
		l++ ;
		r-- ;
	}
	return (dup);
}