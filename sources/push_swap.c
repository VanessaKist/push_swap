/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:26:22 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/18 01:08:49 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_sa(t_element **list)
{
	t_element *aux;

	aux = (*list)->next;
	(*list)->next = (*list)->next->next;
	aux->next = (*list);
	aux = (*list);
}

//pb (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
 void do_pb(t_element **a, t_element **b)
{
	if (!*a)
		return ;
	*b = *a;
	*a = (*a)->next;
} 

/* void do_ra(t_element **stack)
{
	t_element *a;
	
	a = (*stack);
	while (a)
} */

int main (int argc, char **argv)
{
	t_element *a;
	t_element *b;
	t_element *aux;
	
	int			stack_pos;
	
	stack_pos = 0;
	if (argc < 3)
		exit(1);
	--argc;
	a = ft_lstnew(ft_atoi(*++argv), stack_pos++);
	while (--argc)
	{
		ft_lstadd_back(&a, 
			ft_lstnew(ft_atoi(*++argv), stack_pos++));
	}
	a->top_a = ft_atoi(argv[0]);
	printf("top_a:%d\nstackpos:%d\n", a->top_a, stack_pos);
	ft_get_index(a);
	//do_sa(&a);
	//do_pb(&a, &b);
	//do_ra(&a);
	while (a)
	{
		printf("%d:%d - index:%d\n", a->stack_pos, a->content, a->index);
		a = a->next;
	}
	// Imprimindo pra verificar
	/* aux = b;	
	puts("\n\n\t\tLISTA DEPOIS DO PUSH");
	
	printf("Elemento: %i\n", aux->content);
	//aux = aux->next;
	
	return (0); */
}

