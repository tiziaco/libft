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

char	ft_toupper(int  c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* # include <stdio.h>
int	main(void)
{
	char	c = '0';
	
	printf("Character: %c\n", c);
	printf("Uppercase: %c", ft_toupper(c));
	return (0);
}
*/