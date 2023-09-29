
#include "libft.h"
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
char *str12;
size_t size_str12;
char *str1;

str1 = (char *)s1;
size_str12 = ft_strlen(s1) + ft_strlen(s2) + 1;
str12 = malloc(sizeof(char) * size_str12);
if (!str12)
	return (0);
ft_strlcat(str1, s2, size_str12);
ft_strlcpy(str12, s1, ft_strlen(s1) + 1);
return (str12);
}

/*
int main(void)
{
    char st1[] = "hola";
    char st2[] = "adios";

    printf("la funcion mia: %s\n", ft_strjoin(st1, st2));
}*/