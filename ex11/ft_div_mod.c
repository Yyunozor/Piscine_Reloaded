/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:13:03 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/22 15:48:13 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
#include <stdio.h>
int main(void)
{
    int a = 42;
    int b = 2;

    printf("before\nint a\t == %d\nint b\t == %d\n", a, b); 
    ft_div_mod(a, b, &a, &b);

    printf("after\nint a\t == %d\nint b\t == %d\n", a, b);
    return 0;
}
*/