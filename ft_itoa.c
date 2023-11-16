/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:03:42 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/15 16:39:42 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

const char	*reverse_str(char *str)
{
    int start = 0;
    int end = i - 1;
	char temp;
    while (start < end)
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	int		i;

	is_negative = 0;
	i = 0;
    if (n == 0)
	{
        str[0] = '0';
        str[1] = '\0';
    } else if (n < 0)
	{
        is_negative = 1;
        n = -n;
    }
    while (n > 0)
	{
        str[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    if (is_negative)
	{
        str[i] = '-';
        i++;
    }
    str[i] = '\0';
	return (reverse_str(str));
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
