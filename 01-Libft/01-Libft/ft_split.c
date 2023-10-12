/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:59:47 by alvicina          #+#    #+#             */
/*   Updated: 2023/10/11 16:05:20 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*1) Genero el string de punteros. Tantos punteros como palabras + puntero 
a NULL. Para saber cuantas palabras las cuento con un bucle en donde recorro
el string e identifico los elementos delimitadores que me generan palabras. 
los guado en COUNT y le sumo + 1 para el NULL. Con el numero de palabras
creo otro bucle para ir generando los substrings y liberarlos en caso de 
error */
/*
#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	init;
	size_t	count;
	size_t	final;

	final = 0;
	count = 0;
	init = 0;
	while (s[init] != 0)
	{
		init = final;
		while (s[init] == c && s[init] != 0)
			init++;
		if (s[init] != c && s[init] != 0)
			count++;
		final = init;
		while (s[final] != c && s[final] != 0)
			final++;
		init = final;
	}
	return (count);
}

static char	**ft_free(char **split)
{
	int limit;
	
	limit = 0;
	while (split[limit] != 0)
	{
		free(split[limit]);
		split[limit] = NULL;
		limit++;
	}
	free(split);
	split = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	limit;
	size_t	init;
	size_t	final;

	split = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	limit = -1;
	final = 0;
	while (++limit < ft_count_word(s, c))
	{
		init = final;
		while (s[init] == c && s[init] != 0)
			init++;
		final = init;
		while (s[final] != c && s[final] != 0)
			final++;
		split[limit] = malloc (sizeof(char) * (final - init + 1));
		if (split[limit] == 0)
			return (ft_free(split));
		ft_strlcpy(split[limit], (s + init), final - init + 1);
	}
	split[limit] = 0;
	return (split);
}*/

#include "libft.h"

size_t	ft_words(char const *s, char c)
{
    size_t  ini;
    size_t  final;
    size_t  word;

    ini = 0;
    final = 0;
    word = 0;
    ini = final;
	while (s[ini] != '\0')
	{
		ini = final;
		while (s[ini] == c && s[ini] != '\0')
		ini++;
		final = ini;
		if (s[ini] != c && s[ini] != '\0')
			word++;
		while (s[final] != c && s[final] != '\0')
			final++;
		ini = final;
	}
	return (word);
}
static char **ft_free(char **split)
{
	size_t palabras;

	palabras = 0;
	while (split[palabras] != 0)
	{
		free (split[palabras]);
		split[palabras] = NULL;
		palabras++;
	}
	free (split);
	split = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t  ini;
    size_t  final;
    size_t  palabras;
	char	**split;
	
	split = malloc((ft_words(s,c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	palabras = 0;
	final = 0;
	while (palabras < ft_words(s,c))
	{
		ini = final;
		while (s[ini] == c && s[ini] != '\0')
			ini++;
		final = ini;
		while (s[final] != c && s[final] != '\0')
			final++;
		split[palabras] = malloc(sizeof(char) * (final - ini + 1));
		if (!split[palabras])
			return (ft_free(split));
		ft_strlcpy(split[palabras], (s + ini), final - ini + 1);
		palabras++;
	}
	split[palabras] = 0;
	return (split);
}
/*int main(void)
{
    char str[] = "hola soy yo_f tr e";
    char c = ' ';

    // Llamas a la función ft_split para obtener el arreglo de cadenas
    char **result = ft_split(str, c);
    
    if (result)
    {
        size_t word_count = ft_words(str, c);
        printf("El número de palabras es: %zu\n", word_count);
        
        size_t i = 0;
        while (result[i] != (void *)0)
        {
            printf("Palabra %zu: %s\n", i, result[i]);
            i++;
        }
        i = 0;
        while (result[i] != (void *)0)
        {
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }
    
    return (0);
}*/