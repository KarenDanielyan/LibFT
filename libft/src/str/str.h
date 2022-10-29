/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:43:17 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 22:22:20 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H
# include "defines.h"

typedef char *	t_string;	
i32				ft_strlen(t_string str);
// Copy
t_string		ft_strcpy(t_string dest, t_string src);
t_string		ft_strncpy(t_string dest, t_string src, u32 size);
u32				ft_strlcpy(t_string dest, t_string src, u32 size);
// Concatenation
t_string		ft_strcat(t_string dest, t_string src);
t_string		ft_strncat(t_string dest, t_string src, u32 size);
u32				ft_strlcat(t_string dest, t_string src, u32 size);
#endif