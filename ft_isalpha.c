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

int	ft_isalpha(int  c)
{
		if (c >= 'A' && c <= 'Z') 
			return (1);
		else if (c >= 'a' && c <= 'z')
			return (2);
		else
			return (0);
}

/* # include <stdio.h>
int	main(void)
{
	char	c = '-';
	
	printf("Character: %c\n", c);
	printf("Is the char alpha? %d", ft_isalpha(c));
	return (0);
}
*/
