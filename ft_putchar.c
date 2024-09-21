/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:08:27 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/20 22:08:30 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define EOF (-1)

int ft_putchar(int c)
{
    unsigned char ch = (unsigned char)c;
    return (write(1, &ch, 1) == 1) ? c : EOF;
}
