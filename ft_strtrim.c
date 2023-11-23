/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:53:20 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/22 16:09:52 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	check_separator(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strlen_sep(char const *str, const char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(s1, set);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (word == 0)
		return (0);
	while (*s1 != '\0')
	{
		while (*s1 != '\0' && check_separator(*s1, set))
			s1++;
		while (*s1 && !check_separator(*s1, set))
		{
			word[i] = *s1;
			s1++;
			i++;
		}
	}
	word[i] = 0;
	return (word);
}

/* #include <stdio.h>
int	main(void)
{
	char s1[] = " lorem ipsum dolor sit amet";
	char set[] = "l ";

	printf("42 function: %s", ft_strtrim(s1, set));
	// printf("\nSTD function: %d", substr(s1, start, len));
	return (0);
} */
