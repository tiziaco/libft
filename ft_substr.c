/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:20 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/23 12:36:57 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)malloc(len + 1);
	if (!s || !substr)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "Hola";
	unsigned int start = 4294967295;
	size_t len = 0;

	printf("42 function: %s", ft_substr(s1, start, len));
	//printf("\nSTD function: %d", substr(s1, start, len));
	return (0);
}  */