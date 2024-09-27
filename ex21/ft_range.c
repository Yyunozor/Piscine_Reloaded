/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:55:49 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/27 16:58:50 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*p_range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	p_range = range;
	while (min < max)
		*p_range++ = min++;
	return (range);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	int	*tab;
	int	size;

	if (ac == 3)
	{
		size = atoi(av[2]) - atoi(av[1]);
		tab = ft_range(atoi(av[1]), atoi(av[2]));
		if (!tab)
			return (1);
		while (size-- > 0)
			printf("%d\n", *tab++);
	}
	return (0);
}
*/