/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:22:06 by jllarena          #+#    #+#             */
/*   Updated: 2023/10/13 12:57:14 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;	
		return ;
	}
	new -> next = *lst;
	*lst = new;
}
/*int main(void)
{
	t_list *past_list;
	t_list *new_list;
	char str_past[] = "hola";
	char str_new[] = "adios";
	new_list = malloc(sizeof(t_list) * 1);
	past_list = malloc(sizeof(t_list) * 1);
	new_list -> content = str_new;
	past_list -> content = str_past;
	ft_lstadd_front(&past_list, new_list);
	printf("ahora el nodo es: %s", past_list -> content);
}*/