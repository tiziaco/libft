/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:03:42 by tiacovel          #+#    #+#             */
/*   Updated: 2023/08/31 17:25:19 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

const int	count_digits(int n)
{
	int	digits;

	while ((n / 10) <= 9 ) // probably < 1
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*result;
	int	digits;
	int	i;

	result = 0;
	if (n < 0)
	{
		digits++;
		n *= -1;
	}
	digits += count_digits(n);
	result = malloc(sizeof(char) * digits);
	if (result == 0)
		return (0);
	
	return (result);
}

/* #include <stdlib.h>
#include <stdio.h>
int main() 
{
	char *test_strings[] = {
		"12345",       // Positive number
		" +-678",        // Negative number
		" +++678",
		"++0",           // Zero
		"  +-987",       // Leading spaces
		"+42",         // Leading plus sign
		"  -123abc",   // Ignore non-numeric characters after digits
		"123abc",      // Stop at non-numeric characters
		"-2147483648", // Minimum signed int value
		"2147483647",  // Maximum signed int value
		"  -++-+ 998",  // Larger than maximum signed int value
		"-9999999999", // Smaller than minimum signed int value
		" ++-+++---1234aa52",
		" aa-+++---1554aa52",
	};

	int num_tests = sizeof(test_strings) / sizeof(test_strings[0]);

	for (int i = 0; i < num_tests; i++) 
	{
		printf("String: \"%s\"\nSTD: %d, 42: %d\n", 
				test_strings[i], atoi(test_strings[i]), ft_atoi(test_strings[i]));
	}
	return 0;
}
 */