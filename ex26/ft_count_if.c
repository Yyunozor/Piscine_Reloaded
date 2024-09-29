/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:08:19 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/29 22:34:03 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;

	if (!tab)
		return (0);
	count = 0;
	while (*tab != 0)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
/*
#include <stdio.h>
int	starts_with_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}
int	starts_with_b(char *str)
{
	if (str[0] == 'b')
		return (1);
	return (0);
}
int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}
int	ft_len_five(char *str)
{
	if (ft_strlen(str) == 5)
		return (1);
	return (0);
}

int	main(void)
{
	char	*array[] = {"allo!", "banana", "avocado", "boring", 
						"segfault", "bus error", "arbitre", "arbre", 0};
	int		counta = ft_count_if(array, &starts_with_a);
	int		countb = ft_count_if(array, &starts_with_b);
	int		countlen = ft_count_if(array, &ft_len_five);
	printf("Number of strings starting with 'a': %d\n", counta);
	printf("Number of strings starting with 'b': %d\n", countb);
	printf("Number of strings with 5 characters: %d\n", countlen);
	return (0);
}
*/