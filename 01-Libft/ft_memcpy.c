/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:03:25 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/22 13:21:23 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char str[50] = "holamundo";
	char str1[50] = "adiosjosejose";

	printf("el string es: %s\n", str);
	printf("el string 1 es: %s\n", str1);

	memcpy(str, str1, 8);

	printf("funcion original: %s\n", str);

	char str2[];
	char str3[];

	printf("el string es: %s\n", str2);
	printf("el string 1 es: %s\n", str3);

	ft_memcpy(str2, str3, 3);

	printf("funcion original: %s\n", memcpy(((void *)0), ((void *)0), 3));
	
	printf("funcion mia: %s\n", ft_memcpy(((void *)0), ((void *)0), 3));

}

*/
