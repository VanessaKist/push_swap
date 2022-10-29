/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:58:49 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/29 04:39:21 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "unistd.h"

void choose_sorting(int stack_pos, t_element **stack_a, t_element **stack_b)
{	
	if (stack_pos == 2)
		do_swap(stack_a);
	else if (stack_pos == 3)
		sort_for_three(stack_a);
	/* else if (4 < argc && argc <= 6)
		sort_one_to_five(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b, argc); */
}
