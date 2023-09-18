/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:53:55 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/12 13:50:34 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
   	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

    size_t src_len = 0;
    while (src[src_len] != '\0')
   	{
		src_len++;
    }
	return src_len;
}
/*
int main() {
    char destination[] = "sdlgmdflkngfnjkfngne";
    char *source = "HellosgWiorld!";
    size_t resultado = ft_strlcpy(destination, source, sizeof(destination));

    printf("Cadena copiada: %s\n", destination);
    printf("Longitud de la cadena copiada: %zu\n", resultado);

    return 0;
}
*/


/*
int main(void)
{
	char cdena[8];
	char cadena2[] = "adidfgheg" ;

	size_t dstsize = 5;

	printf("el resultado es: %d\n", strlcpy(cdena, cadena2, 5));
	printf("prueba: %s\n", cdena);
	return 0;
}*/
