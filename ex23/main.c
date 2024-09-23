/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:15:38 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/23 21:19:17 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point) 
{
	point->x = 42;
	point->y = 21;
}

int	main(void) 
{
	t_point	point;
	set_point(&point);
	return (0); 
}
