/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:57:30 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/17 00:29:18 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool is_sorted(t_element *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->content < stack_a->next->content)			
			stack_a = stack_a->next;
		else
			return (false);
	}
	return (true);
}

int main (int argc, char **argv)
{
	t_element *stack_a;
	t_element *aux;
	t_element *stack_b;
	t_element *aux2;
	int			stack_pos;
	
	stack_b = NULL;
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
	if(!is_sorted(stack_a))
		choose_sorting(&stack_a, &stack_b, stack_pos);
	free_stack(&stack_a);
	/* aux2 = stack_a;
	while (aux2)
	{
		printf("%d:%d - index:%lld\n", aux2->stack_pos, aux2->content, aux2->index);
		aux2 = aux2->next;
	} */
	return 0;
}
