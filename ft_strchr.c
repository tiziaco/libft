/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:35:37 by tiacovel          #+#    #+#             */
/*   Updated: 2023/08/27 17:51:46 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int c)
{
	while ((*str != '\0') && (*str != c))
		str++;
	return ((char *)str);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*string  = "Hello_world";
	char	c = 0;

	printf("42 function: %s\n", ft_strchr(string, c));
	printf("STD function: %s\n", strchr(string, c));
	return (0);
}

