/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:53:30 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/29 22:28:35 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
// void	ft_putstr(char *str);
// int		ft_putchar(int c);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*p_dup;

	if (!src)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	p_dup = dup;
	while (*src)
		*p_dup++ = *src++;
	*p_dup = '\0';
	return (dup);
}

/*
int	main(int ac, char **av)
{
	char	*dup;
	
	if (ac == 2)
	{
		dup = ft_strdup(av[1]);
		if (!dup)
			return (1);
		ft_putstr(dup);
		free(dup);
	}
	ft_putchar('\n');
	return (0);
}
*/