/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:41:23 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/15 17:12:32 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> 

void    ft_putnbr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, &(*s), 1);
		s++;
	}
}

/* #include <stdio.h>
int main(void)
{
	int fd;
	
	fd = open("test.txt", O_RDWR);
	ft_putstr_fd(" hello", fd);
	printf("Called write function\n");
	close(fd);
	return (0);
} */