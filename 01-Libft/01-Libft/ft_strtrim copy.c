/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:40:20 by jllarena          #+#    #+#             */
/*   Updated: 2023/10/04 14:06:21 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *st1)
{
	int	i;

	i = 0;
	while (st1)
	{
		if (st1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*static char	ft_inicio(char const *s1, char const *set)
{
	size_t	ini;

	ini = 0;
	while(s1[ini] && ft_check(set[ini], s1))
		ini++;
	return (ini);
}

static char ft_final(char const *s1, char const *set)
{
	size_t	fin;

	fin = ft_strlen(s1);
	while

}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	size_t	ini;
	size_t	fin;
	size_t	i;

	if (s1 == 0 || set == 0)
		return (0);
	ini = 0;
	while (s1[ini] != '\0' && ft_check(set[ini], s1))
		ini++;
	fin = strlen(s1);
	while (s1[fin] != '\0' && ft_check(set[fin], s1))
		fin-- ;
	str1 = malloc(sizeof (char) * (fin - ini + 1));
	if (!str1)
		return (0);
	i = 0;
	while (ini < fin)
	{
		str1[i] = s1[ini];
		ini++;
	}
	str1[i] = 0;
	return (str1);
}
/*
int main(void)
{
	char st1[] = "holamundoholamundo";
	char stt[] = "mundo";

	printf("%s\n", ft_strtrim(st1,stt));
}*/