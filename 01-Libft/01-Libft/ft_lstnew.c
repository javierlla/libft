/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:22:12 by jllarena          #+#    #+#             */
/*   Updated: 2023/10/13 10:15:55 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *list;
    
    list = malloc(sizeof(t_list) * 1);
    if (list == 0)
        return (0);
    list -> content = content;
    list -> next = 0;
    return (list);
}
/*int main(void)
{
    t_list *nodo;
    nodo = malloc (sizeof(t_list) * 1);
    nodo -> content = "hola";
    
    ft_lstnew((void *)nodo -> content);
    printf("el nodo: %s", nodo -> content);
}*/