/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:59:06 by tiacovel          #+#    #+#             */
/*   Updated: 2023/09/13 11:14:33 by tiacovel         ###   ########.fr       */
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

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	calculate_total_str_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_strlen(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = calculate_total_str_length(strs, size, ft_strlen(sep));
	d = (char *)malloc((full_length + 1) * sizeof(char));
	if (!d)
		return (0);
	string = d;
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
	}
	*d = '\0';
	return (string);
}

/* #include <stdio.h>
int main(void)
{
	char 	*strs[] = {"How", "are", "you"};
	char	*sep = " ";
	int		strNum;
	char	*str;

	strNum = sizeof(strs) / sizeof(strs[0]);
	printf("Number of strings: %d\n", strNum);
	printf("String length: %d\n", 
			calculate_total_str_length(strs, strNum, ft_strlen(sep)));

	str = ft_strjoin(strNum, strs, sep);
	printf("%s\n", str);
	free(str);
	return (0);
} */