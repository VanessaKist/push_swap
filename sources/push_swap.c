/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:57:30 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/28 03:14:30 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main (int argc, char **argv)
{
	t_element *stack_a;
	t_element *aux;
	t_element *stack_b;
	
	int			stack_pos;
	
	stack_pos = 0;
	if (argc < 3)
		exit(1);
	--argc;
	stack_a = ft_lstnew(ft_atoi(*++argv), stack_pos++);
	while (--argc)
	{
		ft_lstadd_back(&stack_a, 
			ft_lstnew(ft_atoi(*++argv), stack_pos++));
	}
	ft_get_index(stack_a);
	stack_b = stack_a;
	while (stack_b)
	{
		printf("%d:%d - index:%d\n", stack_b->stack_pos, stack_b->content, stack_b->index);
		stack_b = stack_b->next;
	}
	do_reverse_rotate(&stack_a);
	aux = stack_a;
	// Imprimindo pra verificar
	puts("\n\n\t\tLISTA DEPOIS DO REVERSE");
	while (aux)
	{
		printf("Elemento: %d\n", aux->content);
		aux = aux->next;
	}
	return 0;
}

