/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:06:04 by tiacovel          #+#    #+#             */
/*   Updated: 2023/09/07 11:51:43 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		str_length;
	int		i;

	if (src == 0) 
		return (0);
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest != 0) 
		i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include<string.h>
#include<stdio.h>
int main()
{
    char source[] = "hh hh";
 
    char* targetSTD = strdup(source);
	char* target42 = ft_strdup(source);
 
    printf("STD function: %s\n", targetSTD);
	printf("42 function: %s\n", target42);
	free(targetSTD);
	free(target42);
    return 0;
} */
