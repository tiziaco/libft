/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:38 by tiacovel          #+#    #+#             */
/*   Updated: 2023/08/29 18:53:14 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	mylen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dsize;
	unsigned int	ssize;

	j = 0;
	dsize = mylen(dest);
	ssize = mylen(src);
	i = dsize;
	if (size == 0 || size <= dsize)
		return (ssize + size);
	while (src[j] != '\0')
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
	unsigned int sz1;
	unsigned int sz2;

	sz1 = ft_strlcat(s1, s2, 2);
	sz2 = strlcat(s3, s4, 2);
	printf("42 function: %u\n", sz1);
	printf("STD function: %u", sz2);
	return (0);
} */
