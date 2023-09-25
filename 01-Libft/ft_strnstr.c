/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:29:25 by jllarena          #+#    #+#             */
/*   Updated: 2023/09/22 09:48:03 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
	char str1[] = "foo bar baz";
	char str2[] = "baz";

	printf("la funcion hace: %s\n", strnstr(str1, str2, 16));
}
