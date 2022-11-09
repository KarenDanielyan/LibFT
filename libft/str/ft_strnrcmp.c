/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:15:51 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/05 00:36:35 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

i32	ft_strnrcmp(t_string s1, t_string s2, u32 size)
{
	t_string rev1;
	t_string rev2;
	int	res;

	rev1 = ft_strrev(s1);
	rev2 = ft_strrev(s2);
	res = ft_strncmp(rev1, rev2, size);
	free(rev1);
	free(rev2);
	return (res);
}
