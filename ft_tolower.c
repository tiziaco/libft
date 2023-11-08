/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:43:56 by tiacovel          #+#    #+#             */
/*   Updated: 2023/08/27 19:24:03 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(int  c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* # include <stdio.h>
int	main(void)
{
	char	c = 'c';
	
	printf("Character: %c\n", c);
	printf("Uppercase: %c", ft_tolower(c));
	return (0);
}
*/