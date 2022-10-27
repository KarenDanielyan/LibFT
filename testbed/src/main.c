/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:36:07 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/27 15:17:05 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <src/string/ft_string.h>

int main()
{
    char *str = "Hello World!!\n";
    while (str)
    {
        ft_putchar(*str);
        str++;
    }
    return (0);
}
