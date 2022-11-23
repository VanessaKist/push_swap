/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:58:49 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:42:00 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	choose_sorting(t_element **stack_a, t_element **stack_b, int stack_pos)
{
	if ((*stack_a)->stack_pos == 2)
		do_swap(stack_a, 'a');
	else if ((*stack_a)->stack_pos == 3)
		sort_for_three(stack_a);
	else if (3 < (*stack_a)->stack_pos && (*stack_a)->stack_pos <= 5)
		sort_one_to_five(stack_a, stack_b, stack_pos);
	else
		radix_sort(stack_a, stack_b);
}
