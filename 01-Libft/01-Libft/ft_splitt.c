#include "libft.h"
# include <stdio.h>
# include <stddef.h>

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
		split = NULL;
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
