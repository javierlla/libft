/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:18:14 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/19 14:18:45 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while(i == len)
	{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
/*
void    *ft_memmove(void *dst, const void *src, size_t len)
{
   unsigned char       *dest;
   unsigned const char *origen;
   size_t              i;


   i = 0;
   dest = dst;
   origen = src;
   if (dest > origen)
   {
       while (len--)
       {
           dest[len] = origen[len];
       }
   }
   else if (dest < origen)
   {
       while (i < len)
       {
           ((unsigned char *)dst)[i] = ((const char *)src)[i];
           i++;
       }
   }
   return (dst);
}

*/


int main(void)
{
	char str[50] = "holamutdo123";
	char dst1[50]= "1234567";
	printf("el string origen es: %s\n", str);
	printf("el string destino es: %s\n", dst1);
	memmove(dst1, str, 20);
	printf("la funcion original es: %s\n", str);

	char str2[50] = "holamutdo123";
	char dst2[50] = "1234567";
	printf("el string origen es: %s\n", str2);
	printf("el string1 destino es: %s\n", dst2);
	memmove(dst2, str2, 20);

	printf("la funcion original es: %s\n", str2);

}
