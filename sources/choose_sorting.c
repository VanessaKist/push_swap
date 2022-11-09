/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:58:49 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/09 00:24:45 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void choose_sorting(t_element **stack_a, t_element **stack_b)
{	
	if ((*stack_a)->stack_pos == 2)
		do_swap(stack_a);
	else if ((*stack_a)->stack_pos == 3)
		sort_for_three(stack_a);
	else if ((*stack_a)->stack_pos >= 4 && (*stack_a)->stack_pos <= 5)
		sort_one_to_five(stack_a, stack_b);
	/* else
		radix_sort(stack_a, stack_b); */
}
