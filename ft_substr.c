/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:20 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/22 13:35:48 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sublen;
	size_t	slen;

	slen = ft_strlen(s);
	sublen = 0;
	if (start < slen)
		sublen = slen - start;
	if (sublen > len)
		sublen = len;
	substr = (char *)malloc(sublen + 1);
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, sublen + 1);
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