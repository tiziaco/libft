/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:20 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/20 13:33:03 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	substr = (char *)malloc(len + 1);
	if (substr == 0)
		return (0);
	i = 0;
	while ((s[start] != 0) && (start < len))
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	return (substr);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "Hello how are you";
	size_t start = 3;
	int len = 15;

	printf("42 function: %s", ft_substr(s1, start, len));
	// printf("\nSTD function: %d", substr(s1, start, len));
	return (0);
}
 */