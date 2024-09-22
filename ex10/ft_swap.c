/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:10:49 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/22 15:38:55 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
#include <stdio.h>
int main(void)
{
    int nba = 42;
    int nbb = 24;

    printf("before nba\t%d\n", nba);
    printf("before nbb\t%d\n", nbb);

    ft_swap(&nba, &nbb);

    printf("after nba\t%d\n", nba);
    printf("after nbb\t%d\n", nbb);
}
*/