/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:13:03 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/29 22:18:37 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
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