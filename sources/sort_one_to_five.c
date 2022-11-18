/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:16:08 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/18 01:30:54 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int find_smallest_num_index(t_element **stack_a, int smallest_num)
{
	int i;
	t_element *aux;

	aux = *stack_a;
	while (aux)
	{
		if (aux->index == smallest_num)
			break ;
		aux = aux->next;
		i++;
	}
	return (i);
}

void	sort_one_to_five(t_element **stack_a, t_element **stack_b, int stack_pos)
{
	int		curr_index;
	int 	smallest_num;
	int 	middle;
	int		total_pos;

	total_pos = stack_pos;
	smallest_num = 0;
	while (stack_pos > 3)
	{
		curr_index = find_smallest_num_index(stack_a, smallest_num);
		middle = total_pos / 2;
		while ((*stack_a)->index != smallest_num)
		{
			if(curr_index <= middle)
				do_rotate(stack_a, 'a');
			else
				do_reverse_rotate(stack_a, 'a');
		}
		do_push(stack_a, stack_b, 'a');
		stack_pos--;
		smallest_num++;
	}
	sort_for_three(stack_a);
	while (*stack_b)
		do_push(stack_a, stack_b, 'b');
}