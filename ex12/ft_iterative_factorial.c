/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:52:00 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/25 02:18:23 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned long	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		if (res > 2147483647 / (unsigned long)nb)
			return (0);
		res *= nb--;
	}
	return ((int)res);
}
