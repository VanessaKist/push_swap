/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:16:08 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/05 00:36:04 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_one_to_five(t_element **stack_a, t_element **stack_b)
{
	int 	middle_pos;
	int		to_compare;
	t_element *last;
	t_element *aux;
	to_compare = 0;
	t_element *aux2;

	//find_position(stack_a);
	last = ft_lstlast(*stack_a);
	middle_pos = (last->pos + 1) / 2;
	aux2 = *stack_a;
	aux = *stack_a;
	while (to_compare < 2 && aux)
	{
		if(aux->index == to_compare)
		{
			while (aux2 != aux)
			{
				do_rotate(stack_a);
				aux2 = *stack_a;
			}
		    if (aux == *stack_a)
		    	*stack_a = aux->next;
		    do_push(&aux, stack_b, 'a');
		    to_compare++;
		}
		else
			aux = aux->next;
	}
//	aux2 = *stack_b;
	if((*stack_a)->next->next->next == NULL)
	{
		sort_for_three(stack_a);
		do_push(stack_a, stack_b, 'b');
		do_push(stack_a, stack_b, 'b');
	}	
}