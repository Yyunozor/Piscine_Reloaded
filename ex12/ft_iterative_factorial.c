/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:52:00 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/22 16:03:52 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int res;
    int fac;

    res = 1;
    fac = 1;
    if (nb < 0)
        return (0);
    while(fac <= nb)
        res *= fac++;
    return (res);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%ld\n", ft_iterative_factorial(19));
    return (0);
}
*/