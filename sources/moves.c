/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:13:27 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/27 03:18:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_swap(t_element **list)
{
	t_element *aux;

	aux = (*list)->next;
	(*list)->next = (*list)->next->next;
	aux->next = *list;
	*list = aux;
}

//pb (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
void	do_pushB(t_element **a, t_element **b)
{
	if (!*a)
		return ;
	*b = *a;
	*a = (*a)->next;
}

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

void do_reverse_rotate(t_element **list)
{
	t_element *aux;
	t_element *last;

	aux = *list;
	while (aux->next->next)
		aux = aux->next;
	last = ft_lstlast(*list);
	last->next = *list;
	*list = last;
	aux->next = NULL; 
}
