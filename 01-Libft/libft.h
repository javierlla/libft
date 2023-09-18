/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:17:23 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/18 12:35:00 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft.h
#define libft.h

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_strlen(char *str);
void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int     ft_toupper(int c);
int     ft_tolower(int c);
char	*strchr(const char *s, int c);
int		strcmp(const char *s1, const char *s2);
void 	*memchr(const void *s, int c, size_t n);
int     memcmp(const void *s1, const void *s2, size_t n);
char	*strstr(const char *haystack, const char *needle);
int     atoi(const char *str);

#endif
