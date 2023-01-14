/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:21:00 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/15 01:36:50 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <bsd/string.h> /* NOTE: On Mac "bsd/" is not neccesary. */

/* Glibc Functions */
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c); 

int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
#endif