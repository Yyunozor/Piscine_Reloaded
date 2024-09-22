/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:07:56 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/22 15:28:10 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(int c);

void    ft_printnumbers(void)
{
    char c;

    c = '1';
    while(c <= '9')
        ft_putchar(c++);
}
