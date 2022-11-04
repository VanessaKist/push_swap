/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:16:08 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/04 03:07:33 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_one_to_five(t_element **stack_a, t_element **stack_b)
{
	int 	middle_pos;
	t_element *last;
	t_element *aux;
	//find_position(stack_a);
	last = ft_lstlast(*stack_a);
	middle_pos = (last->pos + 1) / 2;
	int to_compare;
	to_compare = 0;
	aux = *stack_a;
	while (to_compare < 2 && aux)
	{
		if(aux->index == to_compare)
		{
			//printf("aux->index: %d\n", aux->index);
			if (aux == *stack_a)
				*stack_a = aux->next;
			do_push(&aux, stack_b, 'a');
			to_compare++;
			aux = *stack_a;
		}
		aux = aux->next;
	}
	*stack_a = aux;
}