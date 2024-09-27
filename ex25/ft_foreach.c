/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:12:00 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/27 22:37:55 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length--)
		f(*tab++);
}

/*
int	main(void)
{
	int		tab[] = {1, 2, 3, 4, 5};
	void	(*f)(int);

	f = &ft_putnbr;
	ft_foreach(tab, 5, f);
	return (0);
}
*/