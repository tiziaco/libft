/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:20 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/23 16:46:57 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (start > len || len < 1)
		return (NULL);
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

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
	{
		newstr = malloc(sizeof(char));
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
} */

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "hola";
	unsigned int start = 4294967295;
	size_t len = 0;

	printf("42 function: %s", ft_substr(s1, start, len));
	//printf("\nSTD function: %d", substr(s1, start, len));
	return (0);
}  */
