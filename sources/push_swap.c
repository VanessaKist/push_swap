/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:57:30 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:44:08 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static bool	is_sorted(t_element *stack_a)
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

bool	stack_init(int argc, char **argv, int *stack_pos, t_element **stack_a)
{
	bool	error;

	--argc;
	*stack_a = ft_lstnew(ft_atoi(*++argv, &error), (*stack_pos)++);
	if (error)
		return (puterror());
	error = true;
	while (--argc)
	{
		ft_lstadd_back(stack_a,
			ft_lstnew(ft_atoi(*++argv, &error), (*stack_pos)++));
		if (error)
			return (puterror());
		error = true;
	}
	return (true);
}

int	main(int argc, char **argv)
{
	t_element	*stack_a;
	t_element	*stack_b;
	int			stack_pos;

	stack_b = NULL;
	stack_pos = 0;
	if (argc < 3)
		return (1);
	if (!stack_init(argc, argv, &stack_pos, &stack_a))
	{
		free_stack(&stack_a);
		return (1);
	}
	printf("stack_pos %d\n", stack_pos);
	ft_get_index(stack_a);
	if (!is_sorted(stack_a))
		choose_sorting(&stack_a, &stack_b, stack_pos);
	free_stack(&stack_a);
	return (0);
}
