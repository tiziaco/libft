/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:38 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/22 10:47:34 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	mylen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dsize;
	size_t	ssize;

	dsize = mylen(dest);
	ssize = mylen(src);
	if (!dest && dstsize == 0)
		return (ssize);
	if (dstsize <= dsize)
		return (dstsize + ssize);
	i = dsize;
	j = 0;
	while (src[j] && dsize + i < dstsize - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dsize + ssize);
}

/* # include <stdio.h>
# include <string.h>
// # include <bsd/string.h>

int	main(void)
{
	char s1[20] = "Hello";
	char s2[20] = " wordfg";
	char s3[20] = "Hello";
	char s4[20] = " wordfg";
	size_t sz1;
	size_t sz2;

	sz1 = ft_strlcat(s1, s2, 2);
	sz2 = strlcat(s3, s4, 2);
	printf("42 function: %u\n", sz1);
	printf("STD function: %u", sz2);
	return (0);
} */
