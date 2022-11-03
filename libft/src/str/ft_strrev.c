/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:22:53 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/04 01:25:52 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_string	ft_strrev(t_string str)
{
	i8	temp;
	i8	*l;
	i8	*r;
	l = str;
	r = str + ft_strlen(str);
	while (l < r)
	{
		temp = *l;
		*l = *r;
		*r = temp;
		l++ ;
		r-- ;
	}
	return (str);
}