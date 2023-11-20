/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:43:56 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/20 13:33:56 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(int c)
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