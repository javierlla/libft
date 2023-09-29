
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  s_len;

    s_len = ft_strlen(s);
    str = malloc(sizeof(char) * (len + 1)); 

    if (!str)
        return (0); 

    if (start >= s_len)
    {
        str[0] = '\0';
        return (str);
    }

    if (len > s_len - start)
        len = s_len - start;

    ft_strlcpy(str, &s[start], len + 1); 

    return (str);
}
/*
int main(void)
{
   char    *s;

   s = "hola buenas tardes";
   printf("%s\n", ft_substr(s, 7, 18));
}*/