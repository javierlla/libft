/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:02:38 by jllarena          #+#    #+#             */
/*   Updated: 2023/10/20 12:29:58 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    
    last = ft_lstlast(*lst);
    if (!new)
        return ;
    if (!*lst)
        *lst = new;
    if (last == NULL)
        return ;
    last -> next = new;
}
/*int main(void)
{
    t_list  *lista;
    t_list  *lista1;
    t_list  *lista2;
    t_list  *last;
    char    str[] = "Soy el ultimo";


    lista = malloc(sizeof(*lista));
    lista1 = malloc(sizeof(*lista1));
    lista2 = malloc(sizeof(*lista2));
    last = malloc(sizeof(*last));


    lista->next = lista1;
    lista1->next = lista2;
    lista2->next = NULL;
    last->content = (void *)str;
    last->next = NULL;


    // Las listas están separadas. Primero las unimos y despues chequeamos que esta OK
    ft_lstadd_back(&lista, last);
    last = ft_lstlast(lista);
    printf("El ultimo nodo de la lista unida contiene: %s\n", last->content);
}*/
