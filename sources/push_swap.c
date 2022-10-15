/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:26:22 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/16 00:03:50 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_sa(t_element **a)
{
	int aux;

	aux = (*a)->content;
	(*a)->content = (*a)->next->content;
	(*a)->next->content = aux;
}

//pb (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
/* void do_pb(t_element **stack, t_element *b)
{
	*b = *a;
	*a = (*a)->next;
} */

int main (int argc, char **argv)
{
	t_element *a;
	//t_element *b;
	t_element *aux;
	
	int			stack_pos;
	
	stack_pos = 0;
	if (argc < 3)
		exit(1);
	--argc;
	a = ft_lstnew(ft_atoi(*++argv), stack_pos++);
	while (--argc)
		ft_lstadd_back(&a, 
			ft_lstnew(ft_atoi(*++argv), stack_pos++));
	ft_get_index(a);
	do_sa(&a);
	/* while (a)
	{
		printf("%d:%d - index:%d\n", a->stack_pos, a->content, a->index);
		a = a->next;
	}	 */

	// Imprimindo pra verificar
	aux = a;	
	puts("\n\n\t\tLISTA DEPOIS DO SWAP");
	while (aux)
	{
		printf("Elemento: %i\n", aux->content);
		aux = aux->next;
	}
	return (0);
}

