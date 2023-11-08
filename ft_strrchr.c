/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:35:37 by tiacovel          #+#    #+#             */
/*   Updated: 2023/08/27 17:51:46 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *str, int c)
{
	char	*pos;

	if (c == 0)
		return (char *)str;
	pos = 0;
	while (*str != '\0')
		{
			if (*str == c)
				pos = (char *)str;
			str++;
		}
	return (char *)pos;
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*string  = "Hello_world_idk";
	char	c = '_';

	printf("42 function: %s\n", ft_strrchr(string, c));
	printf("STD function: %s", strrchr(string, c));
	return (0);
}

