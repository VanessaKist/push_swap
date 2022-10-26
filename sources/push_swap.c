/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:26:22 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/26 04:17:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void do_ra(t_element **list)
{
	t_element *aux;
	t_element *last;
	
	last = ft_lstlast(*list);
	aux = *list; //auxiliar recebe o primeiro elemento da lista;
	last->next = aux; //o últimmo elemento aponta para o primeiro;
	*list = aux->next; //o primeiro elemento da lista agora vai apontar para o segundo elemento;
	aux->next = NULL; //um aponta para nulo;
}

int main (int argc, char **argv)
{
	t_element *a;
	t_element *aux;
	t_element *b;
	
	int			stack_pos;
	
	stack_pos = 0;
	if (argc < 3)
		exit(1);
	--argc;
	a = ft_lstnew(ft_atoi(*++argv), stack_pos++);
	while (--argc)
	{
		ft_lstadd_back(&a, 
			ft_lstnew(ft_atoi(*++argv), stack_pos++));
	}
	a->top_a = ft_atoi(argv[0]);
	ft_get_index(a);
	//do_pushB(&a, &b);
	//do_swap(&a);
	b = a;
	while (b)
	{
		printf("%d:%d - index:%d\n", b->stack_pos, b->content, b->index);
		b = b->next;
	}
	do_ra(&a);
	aux = a;
	// Imprimindo pra verificar
	puts("\n\n\t\tLISTA DEPOIS DO ROTATE");
	while (aux)
	{
		printf("Elemento: %d\n", aux->content);
		aux = aux->next;
	}
	return 0;
}

