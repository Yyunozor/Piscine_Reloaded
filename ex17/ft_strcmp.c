/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:30:16 by anpayot           #+#    #+#             */
/*   Updated: 2024/09/29 22:25:48 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>
void	test_ft_strcmp(char *s1, char *s2)
{
	int	result = ft_strcmp(s1, s2);
	int	expected = strcmp(s1, s2);

	printf("Comparing \"%s\" and \"%s\":\n", s1, s2);
	printf("ft_strcmp: %d\n", result);
	printf("strcmp: %d\n", expected);
	if (result == expected)
		printf("Test passed!\n\n");
	else
		printf("Test failed!\n\n");
}

int	main(void)
{
	test_ft_strcmp("Hello", "Hello");
	test_ft_strcmp("Hello", "hello");
	test_ft_strcmp("Hello", "Hell");
	test_ft_strcmp("Hello", "Helloo");
	test_ft_strcmp("", "");
	test_ft_strcmp("Hello", "");
	test_ft_strcmp("", "Hello");
	test_ft_strcmp("abc", "abd");
	test_ft_strcmp("abc", "abcde");
	test_ft_strcmp("abcdef", "abcde");

	return (0);
}
*/