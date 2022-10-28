/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:26:38 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/28 02:03:39 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void do_rotate(t_element **list)
{
	t_element *aux;
	t_element *last;
	
	last = ft_lstlast(*list);
	aux = *list; //auxiliar recebe o primeiro elemento da lista;
	last->next = aux; //o últimmo elemento aponta para o primeiro;
	*list = aux->next; //o primeiro elemento da lista agora vai apontar para o segundo elemento;
	aux->next = NULL; //o que antes era o primeiro da lista, agora aponta para nulo;
}
