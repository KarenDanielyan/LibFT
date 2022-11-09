/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mymath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:54:28 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 21:33:08 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYMATH_H
# define MYMATH_H
# include "defines.h"

int		ft_factorial(int nb);
int		ft_pow(int nb, int pow);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
t_bool	ft_is_prime(int nb);
int		ft_next_prime(int nb);
#endif