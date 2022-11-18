/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:58:49 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/17 23:11:09 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

void choose_sorting(t_element **stack_a, t_element **stack_b, int stack_pos)
{	
	if (stack_pos == 2)
		do_swap(stack_a, 'a');
	else if (stack_pos == 3)
		sort_for_three(stack_a);
	else if (3 < stack_pos && stack_pos <= 5)
		sort_one_to_five(stack_a, stack_b, stack_pos);
	else
	{
		write(1, "entrei\n", 7);
		radix_sort(stack_a, stack_b, stack_pos);
	}
}
