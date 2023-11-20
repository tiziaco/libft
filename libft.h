/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:56:52 by tiacovel          #+#    #+#             */
/*   Updated: 2023/11/20 11:38:12 by tiacovel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_atoi(char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
int	ft_isalnum(int  c);
int	ft_isalpha(int  c);
int	ft_isascii(int  c);
int	ft_isdigit(int  c);
int	ft_isprint(int  c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void * src, size_t n);
void	*ft_memmove(void *dest, const void * src, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);

#endif