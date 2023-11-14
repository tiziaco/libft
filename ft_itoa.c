/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:03:42 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/14 13:45:03 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

const int	count_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	while (n > 0.1 )
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digits;
	int		i;

	digits = 0;
	digits += count_digits(n);
	result = malloc(sizeof(char) * digits);
	if (result == 0)
		return (0);
	i = 0;
	if (n < 0)
	{
		i = 1;
		n *= -1;
		result[0] = '-';
		digits -= 1;
	}
	while (digits >= i)
	{
		result[digits] = 48 + (n % 10);
		n /= 10;
		digits--;
	}
	return (result);
}

#include <stdlib.h>
#include <stdio.h>
int main(void) 
{
	int test_numbers[] = {
		12345,
		+678,
		-679,
		0,
		1,
		-3
	};

	int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
	// printf("%d", num_tests);
	
	for (int i = 0; i < num_tests; i++) 
	{
		printf("Number: %d - str: %s\n", 
				test_numbers[i], ft_itoa(test_numbers[i]));
		// printf("Digits: %d\n", count_digits(test_numbers[i]));
	}

	return 0;
}
