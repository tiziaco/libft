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

int	ft_isprint(int  c)
{
		if (c >= 32 && c <= 126) 
			return (1);
		else
			return (0);
}

/* # include <stdio.h>
int	main(void)
{
	char	c = 'a';
	
	printf("Character: %c\n", c);
	printf("Is the char in US-ASCII? %d", ft_isprint(c));
	return (0);
}
*/
