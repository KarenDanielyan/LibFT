/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:41:41 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 23:13:16 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put.h"
#include "str/str.h"

static int	ft_same_character(char *str)
{
	int	i;
	int	ascii[127];

	i = 0;
	while (i < 127)
	{
		ascii[i] = 0;
		i++;
	}
	i = 0;
	while (i < ft_strlen(str))
	{
		if (ascii[(int)*(str + i)] != 1)
			ascii[(int)*(str + i)] = 1;
		else
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_check_base(char *base)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (!*base || len == 1)
		return (0);
	if (ft_same_character(base))
		return (0);
	while (i < len)
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	tmp;
	int				base_len;

	if (!ft_check_base(base))
		return ;
	base_len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		tmp = (unsigned int)(-1 * nb);
	}
	else
		tmp = nb;
	if (tmp > (unsigned int)(base_len - 1))
	{
		ft_putnbr_base(tmp / base_len, base);
		ft_putnbr_base(tmp % base_len, base);
	}
	else
		ft_putchar(base[tmp]);
}
