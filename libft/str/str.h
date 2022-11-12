/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:43:17 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/12 20:39:59 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H
# include "defines.h"
# include <stdlib.h>

typedef char *	t_string;

i32				ft_strlen(t_string str);
t_string		ft_strrev(t_string str);
t_string		ft_strcpy(t_string dest, t_string src);
t_string		ft_strncpy(t_string dest, t_string src, u32 size);
u32				ft_strlcpy(t_string dest, t_string src, u32 size);
t_string		ft_strcat(t_string dest, t_string src);
t_string		ft_strncat(t_string dest, t_string src, u32 size);
u32				ft_strlcat(t_string dest, t_string src, u32 size);
i32				ft_strcmp(t_string s1, t_string s2);
i32				ft_strncmp(t_string s1, t_string s2, u32 size);
i32				ft_strnrcmp(t_string s1, t_string s2, u32 size);
t_string		ft_strdup(t_string src);
t_string		ft_strndup(t_string src, u32 size);
#endif