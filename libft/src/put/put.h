/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:08:34 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 23:13:18 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_H
# define PUT_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putnbr_base(int nb, char *base);
void	ft_putendl(char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nbr, int fd);
void	ft_putnbr_base_fd(int nb, char *base, int fd);
void	ft_putendl_fd(char *str, int fd);
#endif