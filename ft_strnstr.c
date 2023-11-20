/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:20 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/20 18:45:24 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while ((*haystack != 0) && (i < len))
	{
		if (*haystack == *needle)
		{
			if (ft_strcmp(haystack, needle) == 0)
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "Hello how are you";
	char s2[] = " are";
	int len = 15;

	printf("42 function: %s", ft_strnstr(s1, s2, len));
	printf("\nSTD function: %s", strnstr(s1, s2, len));
	return (0);
}
 */