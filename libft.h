/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radandri <radandri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:55:01 by radandri          #+#    #+#             */
/*   Updated: 2025/07/07 22:36:34 by radandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <xlocale.h>
#include <ctype.h>

int	ft_isalpha(int c);
int ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char * restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int ft_toupper_l(int c, locale_t loc);
