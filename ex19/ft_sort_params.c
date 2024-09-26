/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:41:56 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/26 17:14:55 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	ft_strcmp_numeric(char *s1, char *s2)
{
	int	num1;
	int	num2;

	num1 = ft_atoi(s1);
	num2 = ft_atoi(s2);
	return (num1 - num2);
}

void	ft_sort_params(int argc, char **argv)
{
	char	**start;
	char	**current;
	char	**next;
	char	*temp;

	start = argv + 1;
	while (start < argv + argc - 1)
	{
		current = start + 1;
		while (current < argv + argc)
		{
			if (ft_strcmp_numeric(*start, *current) > 0)
			{
				temp = *start;
				*start = *current;
				*current = temp;
			}
			current++;
		}
		start++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
