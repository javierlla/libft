/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:07:15 by jllarena          #+#    #+#             */
/*   Updated: 2023/10/19 17:30:52 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(!lst)
		return ;
	while (lst != NULL)
    {
		(*f) (lst -> content);
		lst = lst -> next;
	}
	
}
void	f(void *content)
{
	char *str = (char *)content;
	char *new_content = malloc(strlen(str) + 6);  // 6 caracteres adicionales para "hola"
	if (new_content)
	{
		strcpy(new_content, "hola ");
		strcat(new_content, str);
		free(content);  // Liberamos la memoria del contenido original
		content = new_content;
	}
}*/


void f(void *content)
{
    char *str = (char *)content;
    char *new_content = malloc(strlen(str) + 6);  // 6 caracteres adicionales para "hola"
    if (new_content)
    {
        strcpy(new_content, "hola ");
        strcat(new_content, str);
        free(content);  // Liberamos la memoria del contenido original
        *((char **)content) = new_content; // Actualizamos el puntero al nuevo contenido
    }
}



void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return;

    while (lst)
    {
        (*f)(lst->content);
        lst = lst->next;
    }
}

int main()
{
    t_list *list = malloc(sizeof(t_list));
    if (!list)
    {
        printf("Error al asignar memoria para la lista.\n");
        return 1;
    }

    list->content = strdup("Mundo");
    list->next = NULL;

    t_list *new_node = malloc(sizeof(t_list));
    if (!new_node)
    {
        printf("Error al asignar memoria para el nuevo nodo.\n");
        return 1;
    }

    new_node->content = strdup("Hola");
    new_node->next = list;

    // Aplicar ft_lstiter para agregar "hola" a cada nodo
    ft_lstiter(new_node, f);

    // Imprimir los contenidos de la lista modificada
    t_list *current = new_node;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Liberar la memoria
    while (new_node)
    {
        t_list *temp = new_node;
        new_node = new_node->next;
        free(temp->content);
        free(temp);
    }

    return 0;
}
