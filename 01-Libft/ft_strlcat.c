/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:36:42 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/19 11:57:49 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
}

int main(void)
{
	char destino[50] = "holajuan";
	char origen [20] = "adiosivan";
	printf("el string destino es: %s\n", destino);
	printf("el string origen es: %s\n", origen);
	printf("la funcion original hace: %lu\n", strlcat(destino, origen, 10));
	printf("el final es: %s\n", destino); 
}
