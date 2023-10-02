/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:40:20 by jllarena          #+#    #+#             */
/*   Updated: 2023/10/02 17:43:23 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char *st1)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	size_t	ini;
	size_t	final;
	size_t	i;

	ini = 0;
	while (s1[ini] != '\0' && ft_check(set[ini], s1))
	{
		ini++;
	}
	final = strlen(s1);
	while (s1[final] != '\0' && ft_check(set[final], s1))
	{
		final-- ;
	}
	str1 = malloc(sizeof (char) * (final - ini + 1));
	if (!str1)
		return (0);
	i = 0;
	while (ini < final)
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
	char st1[] = "mundoholamundo";
	char stt[] = "mundo";

	printf("%s\n", ft_strtrim(st1,stt));
}*/